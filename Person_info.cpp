#include <iostream>
#include <string>

using namespace std; // Loai bo std::

class Person {
private:
    string name; // Ten
    int age;     // Tuoi
    string address; // Dia chi

public:
    // Ham khoi tao
    Person(string name, int age, string address)
        : name(name), age(age), address(address) {}

    // Ham set ten
    void setName(string name) {
        this->name = name;
    }

    // Ham lay ten
    string getName() const {
        return name;
    }

    // Ham set tuoi
    void setAge(int age) {
        this->age = age;
    }

    // Ham lay tuoi
    int getAge() const {
        return age;
    }

    // Ham set dia chi
    void setAddress(string address) {
        this->address = address;
    }

    // Ham lay dia chi
    string getAddress() const {
        return address;
    }

    // Ham hien thi thong tin
    virtual void display() const {
        cout << "Name: " << name << "\nAge: " << age << "\nAddress: " << address << endl;
    }
};

class Student : public Person {
private:
    double gpa; // Diem trung binh

public:
    // Ham khoi tao
    Student(string name, int age, string address, double gpa)
        : Person(name, age, address), gpa(gpa) {}

    // Ham set diem trung binh
    void setGpa(double gpa) {
        this->gpa = gpa;
    }

    // Ham lay diem trung binh
    double getGpa() const {
        return gpa;
    }

    // Ham hien thi thong tin sinh vien
    void display() const override {
        Person::display(); // Goi ham hien thi cua lop goc
        cout << "GPA: " << gpa << endl;
    }
};

class Teacher : public Person {
private:
    int salary; // Luong

public:
    // Ham khoi tao
    Teacher(string name, int age, string address, int salary)
        : Person(name, age, address), salary(salary) {}

    // Ham set luong
    void setSalary(int salary) {
        this->salary = salary;
    }

    // Ham lay luong
    int getSalary() const {
        return salary;
    }

    // Ham hien thi thong tin giao vien
    void display() const override {
        Person::display(); // Goi ham hien thi cua lop goc
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int age;
    string address;
    double gpa;
    int salary;

    // Nhap thong tin sinh vien
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cin.ignore(); // Bo qua ky tu xuong dong con lai trong buffer
    cout << "Enter student address: ";
    getline(cin, address);
    cout << "Enter student GPA: ";
    cin >> gpa;
    cin.ignore(); // Bo qua ky tu xuong dong con lai trong buffer

    Student student(name, age, address, gpa);

    // Nhap thong tin giao vien
    cout << "Enter teacher name: ";
    getline(cin, name);
    cout << "Enter teacher age: ";
    cin >> age;
    cin.ignore(); // Bo qua ky tu xuong dong con lai trong buffer
    cout << "Enter teacher address: ";
    getline(cin, address);
    cout << "Enter teacher salary: ";
    cin >> salary;

    Teacher teacher(name, age, address, salary);

    // Hien thi thong tin
    student.display();
    teacher.display();

    return 0;
}
