#include <iostream>
using namespace std;

int main()
{
    //problem: display all even numbers from 1 to 1000

    //1st way: using for loop    
 /*   for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0)
            cout << i << endl;
    }*/

    //2nd way: using while loop
 /*   int i = 1;
    while (i <= 1000) {
        if (i % 2 == 0) {
            cout << i << endl;
        }    
        i++;
    }*/

    //3rd way: using do while loop
   /* int i = 1;
    do {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    } while (i <= 1000);*/

    //use case of "do while" : validate user's input
    double grade;
    do {
        cout << "Enter your grade (0-10): ";
        cin >> grade;
    } while (grade < 0 || grade > 10);
    cout << "Your grade is " << grade;
}

