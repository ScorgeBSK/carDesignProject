#ifndef __DOORDECORATOR_HPP__
#define __DOORDECORATOR_HPP__

#include "car.hpp"

class DoorDecorator : public Car {
      public:
            DoorDecorator(Car*) : Car() {};

            virtual double getCost() = 0;
};

#endif //__DOORDECORATOR_HPP__
