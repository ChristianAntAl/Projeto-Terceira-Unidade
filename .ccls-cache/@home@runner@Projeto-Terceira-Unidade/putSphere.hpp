#ifndef PUTSPHERE_HPP
#define PUTSPHERE_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class putSphere : public FigGeometrica{
    int xcenter, ycenter, zcenter, radius;
public:
    putSphere(int xcenter, int ycenter, int zcenter, int radius, int r, int g, int b, int a);
    void draw(Sculptor &s);
};

#endif