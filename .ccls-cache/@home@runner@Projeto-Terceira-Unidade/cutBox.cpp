#include "cutBox.hpp"
#include "sculptor.hpp"

cutBox::cutBox(float xcenter, float ycenter, float zcenter, float radius){
 
}

void cutVoxel::draw(Sculptor &s){
  if((x<=nx && x>=0) && (y<=ny && y>=0) && (z<=nz && z>=0)){
    v[x][y][z].show = false;
  }
}