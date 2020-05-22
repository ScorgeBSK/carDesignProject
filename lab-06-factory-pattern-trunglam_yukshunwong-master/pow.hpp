#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>
using namespace std;
class Pow : public Base {
	
	public:
		Pow(Base* num1, Base* num2) : Base(){
			this->num1 = num1;
			this->num2 = num2;
		}
		virtual double evaluate() {
			return (pow(num1->evaluate(), num2->evaluate()));
		}
		virtual std::string stringify() {
			return num1->stringify() + " ** " + num2->stringify();
		}
	private:
		Base* num1;
		Base* num2;

};
#endif //__POW_HPP__
