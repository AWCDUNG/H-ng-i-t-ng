#include <iostream>
#include <string>

using namespace std; // Loai bo std::

class Employee {
private:
    string name; // Ten
    int salary;  // Luong

public:
    // Ham khoi tao
    Employee(string name, int salary) {
        this->name = name;
        this->salary = salary;
    }

    // Ham lay ten
    string getName() {
        return name;
    }

    // Ham set ten
    void setName(string name) {
        this->name = name;
    }

    // Ham lay luong
    int getSalary() {
        return salary;
    }

    // Ham set luong
    void setSalary(int salary) {
        this->salary = salary;
    }

    // Ham hien thi thong tin nhan vien
    virtual void display() {  // Su dung virtual de da hinh voi cac lop con
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    int bonus; // Thuong

public:
    // Ham khoi tao
    Manager(string name, int salary, int bonus) : Employee(name, salary) {
        this->bonus = bonus;
    }

    // Ham lay luong bao gom thuong
    int getSalary() {
        return Employee::getSalary() + bonus;  // Luong cong voi tien thuong
    }

    // Ham lay thuong
    int getBonus() {
        return bonus;
    }

    // Ham set thuong
    void setBonus(int bonus) {
        this->bonus = bonus;
    }

    // Ham hien thi thong tin quan ly
    void display() override {  // Ghi de phuong thuc display()
        cout << "Name: " << getName() << endl;
        cout << "Salary (including bonus): " << getSalary() << endl;
    }
};

int main() {
    string name;
    int salary;
    int bonus;

    // Nhap thong tin
    cout << "Nhap Name: ";
    getline(cin, name);

    cout << "Nhap luong thang: ";
    cin >> salary;

    cout << "Nhap thuong them: ";
    cin >> bonus;

    // Tao doi tuong Employee va Manager
    Employee e(name, salary);
    e.display();

    Manager m(name, salary, bonus);  // Truyen day du 3 tham so cho Manager
    m.display();

    return 0;
}
