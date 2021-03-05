#pragma once 
#include "States.h"
#include <Wire.h>


class StateMachine{
  public:
    StateMachine();
    void update();
  private:
    State current_;
    State previous_;
};
