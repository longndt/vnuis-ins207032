// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{ 
	//declare variable : data type + variable name
	 
	//1st. declare and initialize (set initial value) variable at same time
	int a = 3;

	//2nd. declare variable first
	int b;
	//2nd. initialize variable later
	b = 5;

	//get total of "a" and "b" then save value to variable "c"
	int c = a + b;

	//display value of "c"
	std::cout << "c = " << c << "\n";

	//floating point number
	double PI = 3.14;
	std::cout << "PI number: " << PI << "\n";
	float gpa = 7.6;
	std::cout << "Your GPA: " << gpa << "\n";

	//boolean (true or false only)
	bool pass = true;

	//character
	char s = 'a';
	char o = 'b';


	/* IMPORTANCE:
	- 1 solution may have many project
	- only 1 project can run at 1 time
	=> select startup (default) project to run
	- right click on desired project
	- select "Set as Startup project"
	- press "CTRL + F5" to run code
	*/
}
 
