#pragma once

//temperature sensors
#define TS_COUNT 14
#define TS_1 12
#define TS_2 12
#define TS_3 12
#define TS_4 12
#define TS_5 12
#define TS_6 12
#define TS_7 12
#define TS_8 12
#define TS_9 12
#define TS_10 12
#define TS_11 12
#define TS_12 12
#define TS_13 12
#define TS_1 12

int temp_sensors[TS_COUNT] = {TS_COUNT, TS_1, TS_2, TS_3, TS_4, TS_5, TS_6, TS_7, TS_8, TS_9, TS_10, TS_11, TS_12, TS_13, TS_14};

//other sensors
#define OS_COUNT 2
#define OS_1 12
#define OS_2 12

int other_sensors[OS_COUNT] = {OS_COUNT, OS_1, OS_2};

#define SENS_TYPES 2

int& sensor_types[SENS_TYPES] = {&temp_sensors, &other_sensors};

//go through our arrays of sensors and set the pin mode to be an input
for (auto& i : sensor_types) {
  //get sensor types and get the first value of the 
  for(int j = 1; j < (*i[0]); j++){
      pinMode((*i[j]),INPUT);
    }
}
