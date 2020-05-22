#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
	
	public:
		Mult(Base* o1, Base* o2) : Base() {
			this->o1 = o1;
			this->o2 = o2;
		}
		virtual double evaluate() {
			return (o1->evaluate() * o2->evaluate());
		}
		virtual std::string stringify() {
			return o1->stringify() + " * " + o2->stringify();
		}
	private:
		Base* o1;
		Base* o2;

};
#endif //__MULT_HPP__
