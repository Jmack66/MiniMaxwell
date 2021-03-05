#pragma once 

//States that the rocket can be in
enum class State{
  ABORT = -1,
  SAFE = 0,
  IDLING = 1,
  START_UP = 2,
  PRESS = 3,
  PURGE = 4,
  RUNNING = 5,
  SHUT_DOWN = 6
};
