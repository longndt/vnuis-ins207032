#include <iostream>
using namespace std;

int main()
{

	string s = "GeeksforGeeks";

	// length function is used to print the length of the string
	cout << "The length of the string is " << s.length() << endl;

	// capacity function is used to print the capacity of the string
	cout << "The capacity of string is " << s.capacity() << endl;

	// the string.resize() function is used to resize the string to 10 characters
	s.resize(10);

	cout << "The string after using resize function is " << s << endl;

	s.resize(20);

	cout << "The capacity of string before using shrink_to_fit function is " << s.capacity() << endl;

	// shrink to fit function is used to reduce the capacity of the container
	s.shrink_to_fit();

	cout << "The capacity of string after using shrink_to_fit function is " << s.capacity() << endl;

	return 0;
}
