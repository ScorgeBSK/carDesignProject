#include <iostream>

#include "jdm_Car_Factory.hpp"
#include "LamboDoor.hpp"
#include "metallicPaint.hpp"
#include "performanceRatioVisitor.hpp"
int main() {

      std::string userInput;
      JDM_Car_Factory* jdmFactory = new JDM_Car_Factory();

      std::cout << "ENTER MODEL NAME: ";
      std::cin >> userInput;

      Car* userCar = jdmFactory->createCar(userInput);
      if(userCar == nullptr){
            std::cout << "ERROR! INVALID INPUT" << std::endl;
            exit(EXIT_FAILURE);
      }

      std::cout << std::endl;
      std::cout << std::endl;

      userCar->displaySpec();

      std::cout << std::endl;
      std::cout << std::endl;
      std::cout << "**********************************************************************" << std::endl;
      std::cout << std::endl;
      std::cout << std::endl;

      std::cout << "MODIFICATION OPTIONS: " << std::endl;
      std::cout << "DOOR (LAMBO, BUTTERFLY, NO): ";
      std::cin >> userInput;

      if(userInput == "LAMBO"){
            std::cout << userCar->getMake() << " " << userCar->getModel() << " w/ LAMBO DOOR:" << std::endl;
            DoorDecorator* door = new LamboDoor(userCar);
            userCar->setCost(door->getCost());
            std::cout << "$" << userCar->getCost() << std::endl;
      }

      std::cout << "PAINT (MATTE, METALLIC, NO): ";
      std::cin >> userInput;

      if(userInput == "METALLIC"){
            std::cout << userCar->getMake() << " " << userCar->getModel() << " w/ METALLIC PAINT:" << std::endl;
            PaintDecorator* paint = new MetallicPaint(userCar);
            userCar->setCost(paint->getCost());
            std::cout << "$" << userCar->getCost() << std::endl;
      }

      std::cout << std::endl;
      std::cout << std::endl;
      std::cout << "+----------+" << std::endl;
      std::cout << "FULL SPEC:" << std::endl;
      std::cout << "+----------+" << std::endl;
      userCar->displaySpec();
      std::cout << std::endl;
      std::cout << std::endl;

      userCar->accept(new PerformanceRatioVisitor());
      std::cout << std::endl;
      std::cout << "TOTAL COST: $" << userCar->getCost() << std::endl;
      std::cout << std::endl;
      return 0;
}
