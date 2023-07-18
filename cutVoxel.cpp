#include "cutVoxel.hpp"
#include "sculptor.hpp"

cutVoxel::cutVoxel(int x, int y, int z){
  this->x = x;
  this->y = y;
  this->z = z;
}

void cutVoxel::draw(Sculptor &s){
  if((x<=nx && x>=0) && (y<=ny && y>=0) && (z<=nz && z>=0)){
    v[x][y][z].show = false;
  }
}