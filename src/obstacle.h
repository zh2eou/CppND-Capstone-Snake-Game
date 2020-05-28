#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <vector>
#include "SDL.h"

class Obstacle {
 public:
  Obstacle(int x_pos, int y_pos)
      : grid_width(x_pos),
        grid_height(y_pos) {}
  // more properties tbd
 private:
  int x_pos;
  int y_pos;
  SDL_Point loc;
};

#endif