#include <iostream>
using namespace std;

int main(){
	cout << "Enter your gpa (0-10): ";
	double gpa;
	cin >> gpa;
	if (gpa >= 5.0)
		cout << "Congratulation. You've passed !";
	else    //gpa < 5.0
		cout << "You've failed. Good luck next time !";
}