#ifndef CUTSPHERE_HPP
#define CUTSPHERE_HPP

#include "FigGeometrica.hpp"
#include "sculptor.hpp"

class cutSphere : public FigGeometrica{
    float x, y, z;
public:
    void cutSphere(float xcenter, float ycenter, float zcenter, float radius);
    void draw(Sculptor &s);
};


#endif