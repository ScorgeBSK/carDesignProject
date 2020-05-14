#ifndef __NISSAN_GTR_HPP__
#define __NISSAN_GTR_HPP__

#include "car.hpp"

class Nissan_GTR : public Car {

public:
      Nissan_GTR() : Car() {
            setMake("NISSAN");
            setModel("GTR");
            setDriveTrain("AWD - All Wheel Drive");
            setEngineType("3.8L TURBO V6");
            setHorsePower(565);
            setTorque(467);
            setWeight(3865);
            setCost(113540);
      }

};

#endif
