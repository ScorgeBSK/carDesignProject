#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include <cctype>
#include <algorithm>
#include <stack>
#include <queue>

class Factory{
	public:
		Base* parse(char** input, int length){
			
			Base* parse = nullptr;

		      std::string ret = "";

		      for(int i = 1; i < length; i++) {
			  ret += input[i];
			  if(i < length - 1) {
			      ret += " ";
			  }
		      }
			
			for(int i = 0; i < ret.length(); i++){
				    if(ret[i] == '*' && ret[i + 1] == '*'){
					  ret[i] = '^';
					  ret[i + 1] = ' ';
				    }
			}

		      ret.erase(std::remove_if(ret.begin(), ret.end(), ::isspace), ret.end());

		      if(ret[0] == '\0'){
			    return parse;
		      }

		      for(int i = 0; i < ret.length(); i++){
			    if(ret[i] == '+' && ret[i + 1] == '+'){
				  return parse;
			    }
			    if(ret[i] == '-' && ret[i + 1] == '-'){
				  return parse;
			    }
			    if(ret[i] == '/' && ret[i + 1] == '/'){
				  return parse;
			    }
			    if(ret[i] == '^' && ret[i + 1] == '^'){
				  return parse;
			    }
		      }
			
			stack<Base*> stk;
			queue<std::string> oper;
			std::string str = input[1];
			std::string numStr = "";
			for(int i = 1; i <length; i++){
                                if(isdigit(*input[i])){
                                        numStr += input[i];
                                        if(i == length-1){
                                                Base* op = new Op(std::stod(numStr));
                                                stk.push(op);
                                        }
                                }else{
                                        Base* op = new Op(std::stod(numStr));
                                        stk.push(op);
                                        std::string opStr = "";
                                        opStr += input[i];
                                        oper.push(opStr);
                                        numStr = "";
                                }

				if(stk.size() == 2){
					std::string opChar = oper.front();
					oper.pop();
					Base* second =stk.top();
					stk.pop();
					Base* first = stk.top();
					stk.pop();
					if(opChar == "+"){
						Base* total = new Add(first, second);
						stk.push(total);
					}
					else if(opChar == "-"){
						Base* total = new Sub(first, second);
						stk.push(total);
					}else if(opChar == "*"){
						Base* total = new Mult(first, second);
						stk.push(total);
					}else if(opChar == "/"){
						Base* total = new Div(first, second);
						stk.push(total);
					}else if(opChar == "**"){
						Base* total = new Pow(first, second);
						stk.push(total);
					}
				}
                                
        

			}
			Base* total = stk.top();
			stk.pop();
			return total;
		}
};
#endif //__FACTORY_HPP__
					
