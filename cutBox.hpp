#ifndef CUTBOX_HPP
#define CUTBOX_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class cutBox : public FigGeometrica{
    float x, y, z;
public:
    void cutBox(float xcenter, float ycenter, float zcenter, float radius);
    void draw(Sculptor &s);
};


#endif