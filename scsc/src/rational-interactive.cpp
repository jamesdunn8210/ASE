#include <iostream>

#include "../headers/rational.h"
#include "../headers/integer.h"

using namespace ExactArithmetic;

using std::cout;
using std::cin;
using std::endl;

int main()
{

	Integer a(9);
	Integer b(15);

	Integer c = a.operator+(b);
		
	//std::cout << c;



    //cout << "Enter the left operand (e.g. 1/3): ";
    //Rational x;
    //cin >> x;

    //cout << "Enter the operator (+, -, * or /): ";
    //std::string op;
    //cin >> op;

    //cout << "Enter the right operand (e.g. 4/9): ";
    //Rational y;
    //cin >> y;

    //Rational result;
    //if (op == "+")
    //{
    //    result = x + y;
    //}
    //else if (op == "-")
    //{
    //    result = x - y;
    //}
    //else if (op == "*")
    //{
    //    result = x * y;
    //}
    //else if (op == "/")
    //{
    //    result = x / y;
    //}
    //else
    //{
    //    cout << "Unrecognised operator" << endl;
    //    return 1;
    //}
    //cout << result << endl;

    return 0;
}
