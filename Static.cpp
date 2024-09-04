#include<iostream> 

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	static int numberOfStudents;
	Student(string name, int age) {
		this->name = name;
		this->age = age;
		numberOfStudents++;
	}
};

int Student::numberOfStudents = 0;

int main() {
	Student s1("Manh", 19);
	Student s2("Trung", 19);
	Student s3("Kien", 19);
	cout << s1.numberOfStudents;
	return 0;
}