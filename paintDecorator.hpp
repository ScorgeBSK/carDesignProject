#ifndef __PAINTDECORATOR_HPP__
#define __PAINTDECORATOR_HPP__

#include "car.hpp"

class PaintDecorator : public Car {
      public:
            PaintDecorator(Car*) : Car() {};

            virtual int getCost() = 0;
};

#endif //__PAINTDECORATOR_HPP__
