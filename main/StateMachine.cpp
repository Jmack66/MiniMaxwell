#include "StateMachine.h"



StateMachine::StateMachine(){

  Serial.begin(115200); //maybe put other harmless initialization stuff
  current_ = State::SAFE; // initial state of the system
  
}

void StateMachine::update() {
  switch (current_) {
    case State::ABORT: {
        //functionality during ABORT mode
        break;
      }
    case State::SAFE: {
        //functionality during safe mode
        break;
      }
    case State::IDLING: {
        //functionality during IDLING
        break;
      }
    case State::START_UP: {
        //functionality during IDLE
        break;
      }
    case State::PRESS: {
        //functionality during PRESS
        break;
      }
    case State::PURGE: {
        //functionality during PURGE
        break;
      }
    case State::RUNNING: {
        //functionality during RUNNING
        break;
      }
    case State::SHUT_DOWN: {
        //functionality during SHUT_DOWN
        break;
      }
  }
}
