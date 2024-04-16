#include <iostream>
#include <string>
using namespace std;

int main() {
	//input: cin
	//output: cout
	//to use "string", declare library "string" first
	//to ignore "std" before "cin", "cout" => using namespace std
	//to create new line => "\n" or "endl"
	//remember to put semicolon (;) at the end of each statement
	//codes must be put inside main method to run

	cout << "Today is Tuesday\n";
	cout << "We are learning C++\n";

	string name;
	cout << "Input your name: ";
	cin >> name;
	cout << "Hello " + name;
}