#include "app.h"
#include <string>
#include <iostream>
using namespace std;

namespace vsite::oop::v8
{
	int input_num(std::istream& input) {
		int n;
		if (input >> n) {
			return n;
		}
		else {
			throw not_number();
		}
	}

	char input_op(std::istream& input) {
		char c;
		input >> c;
		if (c == '+' || c == '/' || c == '-' || c == '*') {
			return c;
		}
		else {
			throw not_operator();
		}
		
	}

	double calc(double n1, char op, double n2) {
		switch (op) {
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case '*':
			return n1 * n2;
		case '/':
			if (n2 == 0) {
				throw divide_zero();

			}
			else {
				return n1 / n2;
			}
		}
	}
}