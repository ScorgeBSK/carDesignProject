#ifndef __METALLICPAINT_HPP__
#define __METALLICPAINT_HPP__

#include "paintDecorator.hpp"

class MetallicPaint : public PaintDecorator {
      public:
            MetallicPaint(Car* car) : PaintDecorator(car) {
                  this->car = car;
            }

            virtual int getCost() {
                  return car->getCost() + 200;
            }

      private:
            Car* car;
};

#endif //__METALLICPAINT_HPP__
