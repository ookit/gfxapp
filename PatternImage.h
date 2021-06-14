#pragma once

#include "RangePallete.h"

class PatternImage
{
    static unsigned char sSize;
public:
    static unsigned char *generate ( );
    static unsigned char *generateByPallete ( RangePallete &rp );
    static void setSize ( const unsigned char a ) {
        sSize = a;
    }
    static void free(unsigned char *image);

};