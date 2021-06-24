#pragma once

#include "RangePalette.h"

class PatternImage
{
    static unsigned char sSize;
public:
    static unsigned char *generate ( );
    static unsigned char *generateByPalette ( RangePalette &rp );
    static void setSize ( const unsigned char a ) {
        sSize = a;
    }
    static void free(unsigned char *image);

};