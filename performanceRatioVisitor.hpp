#ifndef __PERFORMANCERATIOVISITOR_HPP__
#define __PERFORMANCERATIOVISITOR_HPP__

#include "performanceVisitor.hpp"

class PerformanceRatioVisitor : public PerformanceVisitor {
public:
      virtual void visit(Car* car) {
            double ratio = car->getHorsePower() / car->getWeight();
            std::cout << "Power To Weight Ratio: " << ratio << std::endl;
      }
};

#endif
