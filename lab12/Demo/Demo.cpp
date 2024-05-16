// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double grade;
    do {
        cout << "Enter student's grade (0-10): ";
        cin >> grade;
    } while (grade < 0 || grade > 10);
    cout << "Grade: " << grade;
}
 
