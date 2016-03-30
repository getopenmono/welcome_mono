//: Playground - noun: a place where people can play

import Cocoa

let ultima = NSFont(name: "UltimaProBlack", size: CGFloat(20))!
let ultimaLarge = NSFont(name: "UltimaProBlack", size: CGFloat(36))!
let lato = NSFont(name: "Lato", size: CGFloat(14))!

let welR = NSRect(x: 176/2-15, y: 220-90, width: 30, height: 20)
let welc: NSString = "Hi,"
//let welBit = renderBitmap(welR.size, text: welc, font: ultima)


let strR = NSRect(x: 176/2-66, y: 220-120, width: 104, height: 28)
let str: NSString = "mono";
let strBit = renderBitmap(strR.size, text: str, font: ultimaLarge)
saveBitmap(strBit, name: "mono_bitmap.h", variable: "mono_bitmap")

let startR = NSRect(x: 176/2-45, y: 220-150-30, width: 90, height: 19)
let started: NSString = "Get started on:"
let startBit = renderBitmap(startR.size, text: started, font: lato)
saveBitmap(startBit, name: "started_bitmap.h", variable: "started_bitmap")

let webR = NSRect(x: 176/2-63, y: 220-170-30, width: 126, height: 21)
let web: NSString = "openmono.com/start"
let webBit = renderBitmap(webR.size, text: web, font: lato)
saveBitmap(webBit, name: "web_bitmap.h", variable: "web_bitmap")

createColorTable()