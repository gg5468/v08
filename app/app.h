#include <iostream>

namespace vsite::oop::v8
{
	int input_num(std::istream& input);
	char input_op(std::istream& input);
	double calc(double n1, char op, double n2);
	class exception {
	public:
		virtual std::string msg() const = 0;
		virtual ~exception() = default;
	};

	class divide_zero : public exception {
	public:
		std::string msg() const override { return "divide by zero"; }
	};

	class not_number : public exception {
	public:
		std::string msg() const override { return "not a number"; }
	};

	class not_operator : public exception {
	public:
		std::string msg() const override { return "not an operator"; }
	};


}