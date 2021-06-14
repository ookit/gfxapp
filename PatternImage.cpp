#include "PatternImage.h"

#include <stdlib.h> // for rand

unsigned char PatternImage::sSize = 0;

unsigned char *PatternImage::generate ( )
{
	const unsigned count = sSize*sSize*4;
	unsigned char *image = new unsigned char[count];

	int i = 0;
	for (int y = 0; y < sSize; ++y )
	for (int x = 0; x < sSize; ++x ) {
		unsigned char color;
		/* border
		if (x == 0 || x == a - 1 ||
			y == 0 || y == a - 1 )
			color = 0xFF>>3;
		else*/
		color = (0xFF>>3) + rand() % 0x20;
		(image)[i++] = color - 0x10;
		(image)[i++] = color;
		(image)[i++] = color - 0x10;
		(image)[i++] = 0xFF;
	}

	return image;
}

unsigned char *PatternImage::generateByPallete ( RangePallete &rp )
{
	const unsigned count = sSize*sSize*4;
	unsigned char *image = new unsigned char[count];

	int i = 0;
	for (int y = 0; y < sSize; ++y )
	for (int x = 0; x < sSize; ++x ) {
		unsigned char color;

		(image)[i++] = rp.rLo() + rand() % rp.rAd();
		(image)[i++] = rp.gLo() + rand() % rp.gAd();
		(image)[i++] = rp.bLo() + rand() % rp.bAd();
		(image)[i++] = 0xFF;
	}

	return image;
}

void PatternImage::free(unsigned char *image)
{
	delete[] image;
}