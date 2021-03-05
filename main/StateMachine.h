#pragma once 
#include "States.h"



class StateMachine{
  public:
    void update();


  private:
    State current_;
    State previous_;
};
