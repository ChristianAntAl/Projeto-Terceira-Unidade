#ifndef PUTELLIPSOIDE_HPP
#define PUTELLIPSOIDE_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class putEllipsoide : public FigGeometrica{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    putEllipsoide(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int r, int g, int b, int a);
    void draw(Sculptor &s);
};

#endif