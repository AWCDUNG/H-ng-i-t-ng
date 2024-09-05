#include<iostream>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}
};

// Khai báo lớp Student kế thừa từ lớp Person
class Student : public Person {
private:
	double gpa;

public:
	double getGpa() {
		return gpa;
	}

	void setGpa(double gpa) {
		this->gpa = gpa;
	}
};

int main() {
	Student s;
	s.setName("Thien");
	s.setAge(32);
	s.setGpa(7);
	cout << "Name: " << s.getName() << endl;
	cout << "Age: " << s.getAge() << endl;
	cout << "Gpa: " << s.getGpa() << endl;
}