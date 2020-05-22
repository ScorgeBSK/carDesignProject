#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "factory.hpp"

int main(int argc, char** argv) {
	Factory* factory = new Factory();
	Base* expression = factory->parse(argv, argc);

	std::cout << expression->stringify() << " = " << expression->evaluate() << std::endl;
	
}
