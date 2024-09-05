#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int dob;

public:
    // Constructor khoi tao name va dob
    Person(string name, int dob) {
        this->name = name;
        this->dob = dob;
    }

    // Setter thiet lap gia tri name
    void setName(string name) {
        this->name = name;
    }

    // Getter lay gia tri name
    string getName() {
        return name;
    }

    // Setter thiet lap gia tri dob
    void setDob(int dob) {
        this->dob = dob;
    }

    // Getter lay gia tri dob
    int getDob() {
        return dob;
    }
};

class Student : public Person {
private:
    double gpa;

public:
    // Constructor khoi tao name, dob va gpa
    Student(string name, int dob, double gpa) : Person(name, dob) {
        this->gpa = gpa;
    }

    // Setter thiet lap gia tri gpa
    void setGpa(double gpa) {
        this->gpa = gpa;
    }

    // Getter lay gia tri gpa
    double getGpa() {
        return gpa;
    }
};

int main() {
    string name;
    int dob;
    double gpa;

    // Nhap thong tin cho sinh vien
    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap nam sinh (yyyy): ";
    cin >> dob;

    cout << "Nhap GPA: ";
    cin >> gpa;

    // Tao doi tuong Student voi du lieu nguoi dung nhap vao
    Student s(name, dob, gpa);

    // Hien thi thong tin sinh vien
    cout << "Name: " << s.getName() << endl;
    cout << "Date of birth: " << s.getDob() << endl;
    cout << "GPA: " << s.getGpa() << endl;

    return 0;
}
