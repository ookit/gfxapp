
unsigned char *generatePatternImage ( const unsigned char a )
{
	const unsigned count = a*a*4;
    unsigned char *image = new unsigned char[count];

	int i = 0;
	for (int y = 0; y < a; ++y )
	for (int x = 0; x < a; ++x )
	{
		unsigned char color;
		if (x == 0 || x == a - 1 ||
			y == 0 || y == a - 1 )
			color = 0xFF>>3;
		else color = (0xFF>>3) + rand() % 0x20;
		(image)[i++] = color;
		(image)[i++] = color;
		(image)[i++] = color;
		(image)[i++] = 0xFF;
	}
	return image;
}

// ...

unsigned char *image = generatePatternImage(16);

// ...

delete[] image;

// ...