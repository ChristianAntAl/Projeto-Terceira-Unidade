#ifndef CUTELLIPSOIDE_HPP
#define CUTELLIPSOIDE_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class cutEllipsoide : public FigGeometrica{
    float x, y, z;
public:
    void cutEllipsoide(float xcenter, float ycenter, float zcenter, float radius);
    void draw(Sculptor &s);
};


#endif