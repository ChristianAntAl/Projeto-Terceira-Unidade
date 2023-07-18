#ifndef PUTBOX_HPP
#define PUTBOX_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class putBox : public FigGeometrica{
    int x0, x1, y0, y1, z0, z1, r, g, b, a;
public:
    putBox(int x0, int x1, int y0, int y1, int z0, int z1, int r, int g, int b, int a);
    void draw(Sculptor &s);
};

#endif