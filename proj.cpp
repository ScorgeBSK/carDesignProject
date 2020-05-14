#include <iostream>

#include "jdm_Car_Factory.hpp"
#include "LamboDoor.hpp"
#include "metallicPaint.hpp"
#include "performanceRatioVisitor.hpp"
int main() {

      std::string model;
      JDM_Car_Factory* jdmFactory = new JDM_Car_Factory();

      std::cout << "ENTER MODEL NAME: ";
      std::cin >> model;

      Car* userCar = jdmFactory->createCar(model);
      userCar->displaySpec();

      std::cout << userCar->getMake() << " " << userCar->getModel() << " w/ Door:" << std::endl;
      DoorDecorator* door = new LamboDoor(userCar);
      userCar->setCost(door->getCost());
      std::cout << "$" << userCar->getCost() << std::endl;

      std::cout << userCar->getMake() << " " << userCar->getModel() << " w/ Paint:" << std::endl;
      PaintDecorator* paint = new MetallicPaint(userCar);
      userCar->setCost(paint->getCost());
      std::cout << "$" << userCar->getCost() << std::endl;

      userCar->accept(new PerformanceRatioVisitor());

      return 0;
}
