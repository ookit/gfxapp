#pragma once

class Scroller {
	float mPosX;
	float mPosY;
	float mScale;

public:
	Scroller(float scale, float initX, float initY)
	{
		mScale = scale;
		mPosX = initX;
		mPosY = initY;
	}

	void scrollX(float x) { mPosX += x; }
	void scrollY(float y) { mPosY += y; }

	void jump(float x, float y)
	{
		mPosX = x;
		mPosY = y;
	}

	float getX() { return mPosX; }
	float getY() { return mPosY; }

	void scale(float s) { mScale = s; }
	float scale() { return mScale; }
};
