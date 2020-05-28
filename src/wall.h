#ifndef WALL_H
#define WALL_H

#include <vector>
#include "obstack.h"
#include "SDL.h"

class WALL {
 public:
  Obstacle(int h, int w)
      : _h(h),
        _w(w) {

        }

 private:
  int _h;
  int _w;
  vector<Obstacle> _wall;
};

#endif