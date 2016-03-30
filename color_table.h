#ifndef __COLOR_TABLE__
#define __COLOR_TABLE__

#include "color.h"

namespace mono { namespace display {
	const Color colorTable[] = {
		Color(255, 0, 0),
		Color(255, 76, 0),
		Color(255, 153, 0),
		Color(255, 229, 0),
		Color(203, 255, 0),
		Color(127, 255, 0),
		Color(51, 255, 0),
		Color(0, 255, 25),
		Color(0, 255, 102),
		Color(0, 255, 178),
		Color(0, 255, 255),
		Color(0, 178, 255),
		Color(0, 102, 255),
		Color(0, 25, 255),
		Color(50, 0, 255),
		Color(127, 0, 255),
		Color(204, 0, 255),
		Color(255, 0, 229),
		Color(255, 0, 152),
		Color(255, 0, 76),

	};
	const int colorTable_size = 20;
} }
#endif
