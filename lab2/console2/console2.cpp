#include <iostream>
#include <string>

using namespace std;

int main() {
	//set variables
	int current_year = 2024;
	int birth_year, age;
	string name;
	
	//prompt user to input data
	//then retrieve input from user
	cout << "Enter your name: ";
	//cin >> name;  //trouble: ignore space in user's input
	getline(cin, name);  //update method => get complete name (no omit space)
	cout << "Enter your birth year: ";
	cin >> birth_year;

	//calculate the age
	age = current_year - birth_year;
	//show result to console
	cout << "Hello " << name << endl;
	cout << "You were born in " << birth_year << endl;
	cout << "You are " << age << " years old now" << endl;

	return 0;
}