#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"
#include "obstacle.h"
#include "wall.h"
#include "audio.h"

class Game {
 public:
  Game(std::size_t grid_width, std::size_t grid_height);
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);
  int GetScore() const;
  int GetSize() const;

 private:
  Snake snake;
  SDL_Point food;
  AudioPlayer player;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  vector<vector<Obstacle>> obstacles; // placeholder for obstacles, better map should be used for grid of obstacles
  Wall left_wall;
  Wall right_wall;
  Wall bottom_wall;
  Wall top_wall;
  int score{0};

  void PlaceFood();
  void Update();

  // TODO: 

  void GenerateWall(); // generate walls, call in constructor 
  void GenerateObstacles(); // generate random obstacles in level 

};

#endif