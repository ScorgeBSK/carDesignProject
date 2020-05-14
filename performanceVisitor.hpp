#ifndef __PERFORMANCEVISITOR_HPP__
#define __PERFORMANCEVISITOR_HPP__

#include "car.hpp"
class Car;

class PerformanceVisitor {
public:
      virtual void visit(Car* car) = 0;
};

#endif
