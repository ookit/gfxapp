#include "Projection.h"

std::map<int, std::map<int, std::pair<float, float> > > Projection::s_mArray = { };
void Projection::store(int x, int y, float projX, float projY)
{
    Projection::s_aArray[y][x] = std::pair<float, float>(projX, projY);
}

std::pair<float, float> Projection::get(int x, int y)
{
    return Projection::s_mArray[y][x];
}
