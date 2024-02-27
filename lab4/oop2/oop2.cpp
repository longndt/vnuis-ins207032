#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		int id;
		string name;
		char gender;  //m: male, f: female

	public:
		//constructor
		Student(int i, string n, char g) {
			id = i;
			name = n;
			gender = g;
		}
		//getter
		string getName() {
			return name;
		}
		//setter
		void setId(int i) {
			id = i;
		}
		//custom method
		void displayDetail() {
			cout << "Student's Id: " << id<< endl;
			cout << "Student's Name: " << name << endl;
			if (gender == 'm')
				cout << "Student's Gender: Male" << endl;
			else 
				cout << "Student's Gender: Female" << endl;
		}
};

int main() {
	//number : no quote
	//string : double quotes
	//character : single quotes
	Student s1(12345, "David", 'm');
	Student s2(68686, "Maria", 'f');
	cout << "Name of student 1: " << s1.getName() << endl;
	cout << "Changing Id for student 2 ...." << endl;
	s2.setId(99999);
	cout << "\nDetail of student 1: \n";
	s1.displayDetail();
	cout << "\nDetail of student 2: \n";
	s2.displayDetail();
	return 0; //optional but recommend
}