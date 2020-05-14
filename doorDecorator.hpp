#ifndef __DOORDECORATOR_HPP__
#define __DOORDECORATOR_HPP__

#include "car.hpp"

class DoorDecorator : public Car {
      public:
            DoorDecorator(Car* car) : Car() {
                  this->car = car;
            }

            virtual double getCost() = 0;

      protected:
            Car* car;
};

#endif //__DOORDECORATOR_HPP__
