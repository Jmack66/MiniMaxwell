#include "StateMachine.h"



void StateMachine::update() {
  switch (current_) {
    case State::SAFE: {
        //functionality during safe mode
        break;
      }
    case State::IDLING: {
       //functionality during IDLE 
       break;
      }
      //TODO: ADD THE OTHER STATES
  }
}
