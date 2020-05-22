#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>
#include <sstream>
#include <ctime>

class Rand : public Base {
	public:
		double value;
		
		Rand() : Base() {
			srand(time(0));
			value = rand() % 100;
		}
		
		virtual double evaluate() {return value;}
		virtual std::string stringify() {
			std::ostringstream strs;
                	strs << value;
                	std::string str = strs.str();

			return str;
		}




};

#endif //__RAND_HPP__
