#include <iostream>
#include <string>
using namespace std;

//declare an OOP class
//purpose: represent an object in real life

class Circle {
	//attribute(s) : variable(s)
    /* syntax:
	      access-modifier: 
	        data-type variable-name;
	*/
	//due to information-hiding rule (security), we should set access modifider for variables as "private"
	private: 
		double radius;
		string color;

	//behaviour(s) : method(s)
	/* syntax:
		  access-modifier:
			return-type method-name;
	*/
    //normally, the access modifier for method is "public"
    //we can define the methods (functions) inside or outside the OOP class
    public:
		//declare constructor (used to create new object)  : compulsory => important
		//1 class may have 1 or many constructors
		//constructor: a special method, constructor's name is similar with class's name
		//it has no return type, it may have 0 or 1 or many inside parameters
		//empty (default) constructor : no parameter
		Circle();
		Circle(double r, string c) {
			//left-side: variables
			//right-side: parameters
			radius = r;
			color = c;
		};

		//declare destructor (used to remove an object)    : optional
		//~Circle();

		//getter : observer    => get/retrieve data (read)
		//define inside class
		double getRadius() {
			return radius;
		};
		string getColor();

		//setter : mutator    => change/update data (write)
		void setColor(string c) {
			color = c;
		}

		//calculate area of a cirle based on radius
		double calculateArea() {
			const double PI = 3.14;
			return PI * radius * radius;  
		}

		//calculate perimeter of a circle based on radius
		double calculatePerimeter() {
			const double PI = 3.14;
			return 2 * PI * radius;
		}
};

//define outside class
string Circle::getColor() {
	return color;
}

//main method to test OOP class
int main()
{
	//declare new Circle objects (class instances)
	cout << "Creating circle 1 object ...\n";
	Circle circle1(4.5, "red");
	cout << "Creating circle 2 object ...\n";
	Circle circle2(8.9, "yellow");
	cout << "Radius of circle 1: " << circle1.getRadius() << endl;
	cout << "Color of circle 2: " << circle2.getColor() << endl;

	//get initial color for circle1
	cout << "old color of circle 1: " << circle1.getColor() << endl;
	//result: "red"
	//change color for circle1
	cout << "updating color from red to blue ..." << endl;
	circle1.setColor("blue");
	//get current color for circle1
	cout << "new color of circle 1: " << circle1.getColor() << endl;
	//result: "blue"

	cout << "Area = " << circle1.calculateArea() << endl;
	cout << "Perimeter = " << circle1.calculatePerimeter() << endl;
}
 
