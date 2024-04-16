#include <iostream>
#include <string>

using namespace std;


int main() {
	//2nd case: using "if ... else" to dealt with string easier
	string country;
	cout << "Enter country name: ";
	//cin >> country;  
	//using getline to resolve the problem of input data contains space
	getline(cin, country);

	if (country == "Vietnam") {
		cout << "Hanoi is the capital of Vietnam";
	} else if (country == "Thailand") {
		cout << "Bangkok is the capital of Thailand";
	} else if (country == "United States") {
		cout << "Washington DC is the capital of United States";
	} else if (country == "Singapore") {
		cout << "Singapore is the capital of Singapore";
	} else {
		cout << "Unavailable";
	}

	//1st case: using "switch ... case" with number 
	//declare variable to store country
	//int country;

	////prompt user to input country name
	//cout << "1. Vietnam\n";
	//cout << "2. Thailand\n";
	//cout << "3. United States\n";
	//cout << "Enter country (1,2,3): ";
	////get input from user
	//cin >> country;
	//
	////using "switch...case" to display corresponding capital based on input country
	//switch (country)
	//{
	//case 1:
	//	cout << "Hanoi is the capital of Vietnam";
	//	break;
	//case 2:
	//	cout << "Bangkok is the capital of Thailand";
	//	break;
	//case 3:
	//	cout << "Washington DC. is the capital of United States";
	//	break;
	//default:
	//	cout << "Invalid input";
	//	break;
	//}
}