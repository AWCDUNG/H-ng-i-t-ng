#include<iostream>
using namespace std;

class Rectangle {
public:
    double width;
    double length;

    // Function to get the rectangle's dimensions from the user
    void getInformation() {
        cin >> width;   // Input width
        cin >> length;  // Input length
    }

    // Function to calculate and return the area of the rectangle
    double getArea() {
        return length * width;
    }

    // Function to calculate and return the perimeter of the rectangle
    double getPerimeter() {
        return (length + width) * 2;
    }

    // Function to display the area and perimeter of the rectangle
    void display() {
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle r1;     // Create an object of Rectangle class
    r1.getInformation();   // Get the rectangle's dimensions
    r1.display();          // Display the area and perimeter
    return 0;
}
