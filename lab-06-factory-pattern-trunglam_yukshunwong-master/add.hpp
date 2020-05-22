#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
using namespace std;
class Add : public Base{
	public:
		Add (Base* num1, Base* num2) : Base(){
			this->num1 = num1;
			this->num2 = num2;
		}
		virtual double evaluate(){
			return (num1->evaluate() + num2->evaluate());
		}
		virtual string stringify(){
			return num1->stringify() + " + " + num2->stringify();
		}
	private:
		Base* num1;
		Base* num2;
};
#endif //__ADD_HPP__
