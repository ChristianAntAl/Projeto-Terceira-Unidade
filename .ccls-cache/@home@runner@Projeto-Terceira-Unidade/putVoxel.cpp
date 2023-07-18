#include "putVoxel.hpp"

putVoxel::putVoxel(int x, int y, int z, int r, int g, int b, int a) {
  this->x = x;
  this->y = y;
  this->z = z;
  this->r = r;
  this->g = g;
  this->b = b;
  this->a = a;
}

void putVoxel::draw(Sculptor &s){
  s.setColor(r, g, b, a);
  s.putVoxel(x, y, z);
}