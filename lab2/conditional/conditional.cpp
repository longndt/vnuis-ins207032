#include <iostream>
using namespace std;


int main() {
	double grade;

	cout << "Enter grade: ";
	cin >> grade;

	/*
	 Simple problem: 2 possibles cases
     0 - 5 : Fail
     5 - 10: Pass
    */
	//if (grade >= 5.0) {
	//	//we can obmit (ignore) the brackets { } 
	//	//if there is only 1 statement inside structure
 //       //but from 2 statements, brackets are compulsory (required)
	//	cout << "Pass" << endl;
	//    cout << "Congratulation !" << endl;
	//} else {
	//	cout << "Fail" << endl;
	//    cout << "Good luck next time !" << endl;
	//}

	/*
	Complicated problem: more than 2 possible cases
	   9 - 10: Excellent         (IF)
	   8 - 9 : Very good         (ELSE IF)
	   7 - 8 : Good              (ELSE IF)
	   6 - 7 : Fair              (ELSE IF)
	   5 - 6 : Pass              (ELSE IF)
	   0 - 5 : Fail              (ELSE IF)
	   <0 or >10: Invalid grade  (ELSE)
	*/

	//if (9 <= grade <= 10)
	if (grade >= 9.0 && grade <= 10.0)
		cout << "Excellent \n";
	else if (grade >= 8.0 && grade < 9.0)
		cout << "Very good \n";
	else if (grade >= 7.0 && grade < 8.0)
		cout << "Good \n";
	else if (grade >= 6.0 && grade < 7.0)
		cout << "Fair \n";
	else if (grade >= 5.0 && grade < 6.0)
		cout << "Pass \n";
	else if (grade >= 0 && grade < 5)
		cout << "Fail \n";
	else
		cout << "Invalid grade \n";

	return 0;
}
