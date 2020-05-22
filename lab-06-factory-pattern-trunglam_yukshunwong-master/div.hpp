#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
	
	public:
		Div(Base* o1, Base* o2) : Base() {
			this->o1 = o1;
			this->o2 = o2;
		}
		virtual double evaluate() {
			if(o2->evaluate() == 0){
				throw "Division by zero error!";	
			}
			return (o1->evaluate() / o2->evaluate());
		}
		virtual std::string stringify() {
			if(o2->evaluate() == 0){
				throw "Division by zero error!";	
			}	
			return o1->stringify() + " / " + o2->stringify();
		}
	private:
		Base* o1;
		Base* o2;

};
#endif //__DIV_HPP__
