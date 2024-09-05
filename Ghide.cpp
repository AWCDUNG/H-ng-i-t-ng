#include <iostream>
using namespace std;

class Person {
private:
    string name;
    string gender;

public:
    // Constructor khoi tao name va gender
    Person(string name, string gender) {
        this->name = name;
        this->gender = gender;
    }

    // Getter lay gia tri name
    string getName() {
        return name;
    }

    // Setter thiet lap gia tri name
    void setName(string name) {
        this->name = name;
    }

    // Getter lay gia tri gender
    string getGender() {
        return gender;
    }

    // Setter thiet lap gia tri gender
    void setGender(string gender) {
        this->gender = gender;
    }

    // Ham hien thi thong tin person
    void display() {
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
    }
};

class Student : public Person { // Thay doi tu khoa de public ke thua
private:
    int salary;

public:
    // Constructor khoi tao name, gender va salary
    Student(string name, string gender, int salary) : Person(name, gender) {
        this->salary = salary;
    }

    // Getter lay gia tri salary
    int getSalary() {
        return salary;
    }

    // Setter thiet lap gia tri salary
    void setSalary(int salary) {
        this->salary = salary;
    }

    // Ham hien thi thong tin student, goi lai display cua Person
    void display() {
        Person::display(); // Goi display cua lop Person
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name, gender;
    int salary;

    // Nhap thong tin cho sinh vien
    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap gioi tinh: ";
    getline(cin, gender);

    cout << "Nhap luong: ";
    cin >> salary;

    // Tao doi tuong Student voi du lieu nguoi dung nhap vao
    Student s(name, gender, salary);

    // Hien thi thong tin sinh vien
    cout << "Thong tin sinh vien:" << endl;
    s.display();

    return 0;
}
