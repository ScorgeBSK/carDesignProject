#ifndef __JDM_CAR_FACTORY_HPP__
#define __JDM_CAR_FACTORY_HPP__

#include "nissan_GTR.hpp"
#include "nissan_370Z.hpp"

class JDM_Car_Factory {
public:
      Car* createCar(std::string carModel){

            if(carModel == "GTR"){
                  return new Nissan_GTR();
            }
            else if (carModel == "370Z"){
                  return new Nissan_370Z();
            }
            else{
                  std::cout << "NO SUCH MODEL ERROR!" << std::endl;
                  return new Car();
            }
      }
};

#endif
