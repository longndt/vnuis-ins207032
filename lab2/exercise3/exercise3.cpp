#include <iostream>
using namespace std;

/*
Homework 1 - Exercise 3
Develop  a  simple  calculator  that  asks  the  user  to  input  two  numbers and an  arithmetic operator  (+, -, *, / ).
The program should then output the result of the arithmetic operation.
*/

int main() {
	int a, b, result;
	char op; //operator
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter operator (+, -, *, /, %): ";
	cin >> op;

	//use switch case in this situation
	switch (op)
	{
	case '+':   //addition
		result = a + b;
		cout << a << " + " << b << " = " << result << endl;
		break;
	case '-':   //subtraction
		result = a - b;
		cout << a << " - " << b << " = " << result << endl;
		break;
	case '*':   //multiplication
		result = a * b;
		cout << a << " * " << b << " = " << result << endl;
		break;
	case '/':   //division
		result = a / b;
		cout << a << " / " << b << " = " << result << endl;
		break;
	case '%':   //modulus (get the remainder of a division)
		result = a % b;
		cout << a << " % " << b << " = " << result << endl;
		break;
	default:
		cout << "Invalid operator";
		break;
	}

	return 0;
}