#pragma once

class Scroller2D {
    float mPosX;
    float mPosY;
    float mZoom;

public:
    Scroller2D() {}
    ~Scroller2D() {}

    void scrollX(float x) { mPosX += x; }
    void scrollY(float y) { mPosY += y; }

    void jump(float x, float y)
    {
        mPosX = x;
        mPosY = y;
    }

    void setZoom(float s) { mZoom = s; }

    float getX() { return mPosX; }
    float getY() { return mPosY; }
    float zoom() { return mZoom; }
};
