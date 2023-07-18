#ifndef PUTVOXEL_HPP
#define PUTVOXEL_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class putVoxel : public FigGeometrica{
    int x, y, z;
public:
    putVoxel(int x, int y, int z, int r, int g, int b, int a);
    void draw(Sculptor &s);
};


#endif