#include "Projection.h"

std::map<int, std::map<int, std::pair<float, float> > > Projection::matrix = { };

void Projection::store(int x, int y, float projX, float projY)
{
    Projection::matrix[y][x] = std::pair<float, float>(projX, projY);
}

std::pair<float, float> Projection::get(int x, int y)
{
    return Projection::matrix[y][x];
}
