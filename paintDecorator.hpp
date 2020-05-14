#ifndef __PAINTDECORATOR_HPP__
#define __PAINTDECORATOR_HPP__

#include "car.hpp"

class PaintDecorator : public Car {
      public:
            PaintDecorator(Car* car) : Car() {
                  this->car = car;
            }

            virtual int getCost() = 0;

      protected:
            Car* car;
};

#endif //__PAINTDECORATOR_HPP__
