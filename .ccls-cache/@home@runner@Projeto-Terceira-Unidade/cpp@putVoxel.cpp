#include "sculptor.hpp"
#include "putVoxel.hpp"

void Sculptor::putVoxel(int x, int y, int z) {
  if((x<=nx && x>=0) && (y<=ny && y>=0) && (z<=nz && z>=0)){ 
   v[x][y][z].r = r;
   v[x][y][z].g = g;
   v[x][y][z].b = b;
   v[x][y][z].a = a;
   v[x][y][z].show = true;
 }
}