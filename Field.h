#pragma once

#include "FieldTypes.h"
#include "FieldGL.h"

class Field
{
    FieldGL *m_pFieldGL;

public:
    Field(unsigned char x, unsigned char y, unsigned char type)
    {
        m_pFieldGL = new FieldGL(type);
        m_pFieldGL->setPos(x, y);
    }

    FieldGL *fieldGL() { return m_pFieldGL; }

    void render()
    {
        m_pFieldGL->render();
    }

    ~Field()
    {
        delete m_pFieldGL;
    }

};