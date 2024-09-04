#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Function to get information from the user
    void getInformation() {
        cin >> name;  // Read the student's name
        cin >> age;   // Read the student's age
    }

    // Function to display the student's information
    void display() {
        cout << "Name: " << name << endl;  // Output the student's name
        cout << "Age: " << age << endl;    // Output the student's age
    }
};

int main() {
    Student S;      // Create an instance of the Student class
    S.getInformation();  // Call the function to input information
    S.display();    // Call the function to display information
    return 0;
}
