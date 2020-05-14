#include <iostream>

#include "jdm_Car_Factory.hpp"

int main() {

      std::string model;
      JDM_Car_Factory* jdmFactory = new JDM_Car_Factory();

      std::cout << "ENTER MODEL NAME: ";
      std::cin >> model;

      Car* userCar = jdmFactory->createCar(model);
      userCar->displaySpec();




      return 0;
}
