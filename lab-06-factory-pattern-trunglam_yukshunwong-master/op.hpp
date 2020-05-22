#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <sstream>

class Op : public Base {
    public:
	Op() {value = 0;}
        Op(double value) : Base() {this->value = value;}
        virtual double evaluate() { return value; }
        virtual std::string stringify() {
		std::ostringstream strs;
		strs << value;
		std::string str = strs.str();
		return str;
	}
    protected:
	double value;
};

#endif //__OP_HPP__
