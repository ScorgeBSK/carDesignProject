#ifndef __CAR_HPP__
#define __CAR_HPP__

class Car {

private:
      std::string make;
      std::string model;
      std::string drive;
      std::string engineType;
      double horsePower;
      double torque;
      double cost;

public:
      void displaySpec(){
            std::cout << make << " " << model << ":" << std::endl;
            std::cout << "------------------------------------------------------------" << std::endl;
            std::cout << "Drivetrain: " << drive << std::endl;
            std::cout << "Engine Type: " << engineType << std::endl;
            std::cout << "Horsepower: " << horsePower << std::endl;
            std::cout << "Torque: " << torque << " Lb/Ft" << std::endl;
            std::cout << "Price: $" << cost << std::endl;
      }

      void setMake(std::string make){
            this->make = make;
      }

      std::string getMake(){
            return make;
      }

      void setDriveTrain(std::string drive){
            this->drive = drive;
      }

      std::string getDriveTrain(){
            return drive;
      }

      void setModel(std::string model){
            this->model = model;
      }

      std::string getModel(){
            return make;
      }

      void setEngineType(std::string engineType){
            this->engineType = engineType;
      }

      std::string getEngineType(){
            return engineType;
      }

      void setHorsePower(double horsePower){
            this->horsePower = horsePower;
      }

      double getHorsePower(){
            return horsePower;
      }

      void setTorque(double torque){
            this->torque = torque;
      }

      double getTorque(){
            return torque;
      }

      void setCost(double cost){
            this->cost = cost;
      }

      double getCost(){
            return cost;
      }


};

#endif
