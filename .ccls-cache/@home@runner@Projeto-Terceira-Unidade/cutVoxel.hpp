#ifndef CUTVOXEL_HPP
#define CUTVOXEL_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class cutVoxel : public FigGeometrica{
    float x, y, z;
public:
    cutVoxel(int x, int y, int z);
    void draw(Sculptor &s);
};


#endif