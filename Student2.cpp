#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    // Constructor with parameters
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Method to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;

    // Input for the first student
    cout << "Enter the name of the first student: ";
    getline(cin, name);  // Get the full name input
    cout << "Enter the age of the first student: ";
    cin >> age;
    cin.ignore(); // To ignore the newline character left in the input buffer

    Student s1(name, age);  // Create the first student

    // Input for the second student
    cout << "Enter the name of the second student: ";
    getline(cin, name);  // Get the full name input
    cout << "Enter the age of the second student: ";
    cin >> age;

    Student s2(name, age);  // Create the second student

    // Display the information of both students
    s1.display();
    s2.display();

    return 0;
}
