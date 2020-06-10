#ifndef WALL_H
#define WALL_H

#include <vector>
#include "SDL.h"

class WALL {
 public:
  Obstacle(int h, int w, int holes)
      : _h(h),
        _w(w),
        _holes (holes) {

        }
  void GenerateWall(); // generate walls, call in constructor 
 private:
  int _h;
  int _w;
  int _holes;
  vector<SDL_Point> _wall;
};

#endif