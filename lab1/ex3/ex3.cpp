#include <iostream>

//declare namespace std for shorter code
using namespace std;

int main()
{
    //declare variable a, b, total, product;
    int a, b, total, product;
    //prompt user to input "a"
    cout << "Enter a: ";
    //get value from user and assign to "a"
    cin >> a;
    //prompt user to input "b"
    cout << "Enter b: ";
    //get value from user and assign to "b"
    cin >> b;
    //calculate sum of a and b and assign to "total"
    total = a + b;
    //calculate mulplication of a and b  and assign to "product"
    product = a * b;
    //display result to screen (console)
    cout << "Total = " << total << "\n";
    cout << "Product = " << product << "\n";


}

