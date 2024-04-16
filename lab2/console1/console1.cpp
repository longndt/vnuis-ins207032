//declare "iostream" library for input & output flow
#include <iostream>
//declare "string" library to work with "string" data type
#include <string>
//declare namespace "std" for clearer & shorter code
using namespace std;

int main() {
	//put code inside "main" method to run (not outside)
	
	//display output to console
	cout << "Coding is interesting" << endl;
	cout << "Tet holiday is coming\n";
	cout << "We still need to do homework\n";

	//declare variable
	int year = 2024;
	string hanoi = "Hanoi is the capital of Vietnam";
	//use "<<" for concatenation/combination/merge
	cout << "We are living in " << year << endl;
	cout << hanoi << endl;

	//return a value at the end of program
	return 0;  //optional in this case but this is good hobby to practice

	//CTRL + F5: Run program
}

