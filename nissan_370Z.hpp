#ifndef __NISSAN_370Z_HPP__
#define __NISSAN_370Z_HPP__

#include "car.hpp"

class Nissan_370Z : public Car {

public:
      Nissan_370Z() : Car() {
            setMake("NISSAN");
            setModel("370Z");
            setDriveTrain("RWD - Rear Wheel Drive");
            setEngineType("3.7L V6");
            setHorsePower(332);
            setTorque(270);
            setWeight(3232);
            setCost(30090);
      }

};

#endif
