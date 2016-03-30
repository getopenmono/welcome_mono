import Cocoa

let clouds = NSColor(calibratedRed: 0xec/255.0, green: 0xf0/255.0, blue: 0xf1/255.0, alpha: 0xff)
let midnightBlue = NSColor(calibratedRed: 0x2c/255.0, green: 0x3e/255.0, blue: 0x50/255.0, alpha: 0xff)


public func renderBitmap(size: NSSize, text: NSString, font: NSFont) -> NSBitmapImageRep
{
    let bitmap = NSBitmapImageRep(
        bitmapDataPlanes: nil,
        pixelsWide: Int(size.width),
        pixelsHigh: Int(size.height),
        bitsPerSample: 8,
        samplesPerPixel: 4,
        hasAlpha: true,
        isPlanar: false,
        colorSpaceName: NSCalibratedRGBColorSpace,
        bytesPerRow: 0, bitsPerPixel: 0)

    let paragraph = NSMutableParagraphStyle()
    paragraph.alignment = .Center
    let attr = [
        NSFontAttributeName: font,
        NSForegroundColorAttributeName: NSColor.whiteColor(),
        NSParagraphStyleAttributeName: paragraph
    ]

    NSGraphicsContext.saveGraphicsState();
    let context = NSGraphicsContext(bitmapImageRep: bitmap!)
    NSGraphicsContext.setCurrentContext(context)
    let rect = NSRect(origin: NSPoint(x: 0, y: 0), size: size)

    NSColor.blackColor().setFill()
    NSBezierPath.fillRect(rect);
    text.drawInRect(rect, withAttributes: attr)

    NSGraphicsContext.restoreGraphicsState()

    return bitmap!;
}

public func saveBitmap(bitmap: NSBitmapImageRep, name: String, variable: String)
{
    let source = NSMutableString()

    source.appendString("#ifndef __"+variable+"__\n")
    source.appendString("#define __"+variable+"__\n")

    source.appendString("namespace mono { namespace display {\n")
    source.appendString("\tconst unsigned char "+variable+"[] = {\n")
    source.appendString("\t\t")

    var pixel = [0,0,0]
    var size = 0;
    for y in 0..<bitmap.pixelsHigh
    {
        for x in 0..<bitmap.pixelsWide
        {
            bitmap.getPixel(&pixel, atX: x, y: y)

            let byte1 = (pixel[0]+pixel[1]+pixel[2])/3
            //let byte2 = ((pixel[1] << 3) & 0xE0) | ((pixel[2] >> 3) & 0x1F)

            if y==bitmap.pixelsHigh-1 && x == bitmap.pixelsWide-1 {
                source.appendFormat("0x%X", byte1)
            }
            else {
                source.appendFormat("0x%X, ", byte1)
            }

            size += 1
        }
    }

    source.appendString("\n\t};\n")
    source.appendString("\tconst int "+variable+"_bytes = "+String(size)+";\n")
    source.appendString("\tconst int "+variable+"_width = "+String(bitmap.pixelsWide)+";\n")
    source.appendString("\tconst int "+variable+"_height = "+String(bitmap.pixelsHigh)+";\n")
    source.appendString("} }\n")
    source.appendString("#endif\n")

    do {
        try source.writeToFile(name, atomically: true, encoding: NSUTF8StringEncoding)
    }
    catch {
        print("could not save file")
    }
}


public func createColorTable()
{
    let source = NSMutableString()

    source.appendString("#ifndef __COLOR_TABLE__\n")
    source.appendString("#define __COLOR_TABLE__\n\n")

    source.appendString("#include \"color.h\"\n\n");

    source.appendString("namespace mono { namespace display {\n")
    source.appendString("\tconst Color colorTable[] = {\n")

    for c in 0..<20
    {
        let color = NSColor(calibratedHue: CGFloat(c)/20.0, saturation: 1.0, brightness: 1.0, alpha: 1.0)
        let r = String(Int(color.redComponent*255))
        let g = String(Int(color.greenComponent*255))
        let b = String(Int(color.blueComponent*255))
        if c == 99 {
            source.appendString("\t\tColor("+r+", "+g+", "+b+")\n")
        }
        else {
            source.appendString("\t\tColor("+r+", "+g+", "+b+"),\n")
        }
    }

    source.appendString("\n\t};\n")
    source.appendString("\tconst int colorTable_size = "+String(20)+";\n")
    source.appendString("} }\n")
    source.appendString("#endif\n")

    do {
        try source.writeToFile("color_table.h", atomically: true, encoding: NSUTF8StringEncoding)
    }
    catch {
        print("could not save file")
    }
}