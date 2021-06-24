#pragma once

#include <map>

class Projection
{
    static std::map<int, std::map<int, std::pair<float, float> > > s_mArray;
public:
    static void store(int x, int y, float projX, float projY);
    static std::pair<float, float> get(int x, int y);
};
