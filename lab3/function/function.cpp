#include <iostream>
#include <string>
using namespace std;

//step 1: define function
//function syntax
/*
   return-type function-name (parameter-list) {
      //function-body
   }
*/

//1st type: function without parameter and no return
void hello() {
    cout << "Hello World !\n";
}
//2nd type: function with parameter but no return
void hello(string name) {
    cout << "Hello " << name << " !" << endl;
}
//3rd type: function without parameter but return value
int currentYear() {
    return 2024;
}
//4th type: function has parameter and also return value
int total(int a, int b) {
    return a + b;
}

int main()
{
    //step 2: call function
    hello();
    hello("VNU IS");
    cout << "We are living in " << currentYear() << endl ;
    cout << "Total of 10 and 20 is " << total(10, 20) << endl;
 }



 
