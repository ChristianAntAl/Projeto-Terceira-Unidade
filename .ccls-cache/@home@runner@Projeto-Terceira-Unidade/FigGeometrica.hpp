#ifndef FIGGEOMETRICA_HPP
#define FIGGEOMETRICA_HPP

#include "sculptor.hpp"

class FigGeometrica{
protected:
    float r, g, b, a;
public:
    FigGeometrica();
    virtual void draw(Sculptor &s)=0;
};


#endif