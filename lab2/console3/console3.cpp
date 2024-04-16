#include <iostream>
#include <string>

using namespace std;

int main() {
	string city, country;
	cout << "Enter country: ";
	getline(cin, country);
	cout << "Enter capital: ";
	getline(cin, city);

	cout << city << " is the capital of " << country << endl;
	return 0;
}