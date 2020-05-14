#ifndef __LAMBODOOR_HPP__
#define __LAMBODOOR_HPP__

#include "doorDecorator.hpp"

class LamboDoor : public DoorDecorator {
      public:
            LamboDoor(Car* car) : DoorDecorator(car) {
                  this->car = car;
            }

            virtual double getCost(){
                  return car->getCost() + 500;
            }

      private:
            Car* car;
};

#endif //__LAMBODOOR_HPP__
