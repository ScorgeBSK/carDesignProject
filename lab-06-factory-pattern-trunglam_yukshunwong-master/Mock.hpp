#ifndef __MOCK_HPP__
#define __MOCK_HPP__

#include "base.hpp"

class PositiveOpMock : public Base {
        public:
                PositiveOpMock() {};
                virtual double evaluate() {return 7;}
                virtual std::string stringify() {return "7";}
};

class NegativeOpMock : public Base {
        public:
                NegativeOpMock() {};
                virtual double evaluate() {return -7;}
                virtual std::string stringify() {return "-7";}
};

class ZeroOpMock : public Base {
        public:
                ZeroOpMock() {};
                virtual double evaluate() {return 0;}
                virtual std::string stringify() {return "0";}
};

class AddMock : public Base {
        public:
                AddMock() {};
                virtual double evaluate() {return (7 + 7);}
                virtual std::string stringify() {return "7 + 7";}
};

class MinusMock : public Base {
        public:
                MinusMock() {};
                virtual double evaluate() {return (7 - 7);}
                virtual std::string stringify() {return "7 - 7";}
};

class MultMock : public Base {
        public:
                MultMock() {};
                virtual double evaluate() {return (7 * 7);}
                virtual std::string stringify() {return "7 * 7";}
};

class DivMock : public Base {
        public:
                DivMock() {};
                virtual double evaluate() {return (7 / 7);}
                virtual std::string stringify() {return "7 / 7";}
};

#endif //__MOCK_HPP__

