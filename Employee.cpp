#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    string firstName;
    string lastName;
    int salary;

public:
    // Constructor khoi tao gia tri cho cac thuoc tinh
    Employee(int id, string firstName, string lastName, int salary) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }

    // Getter lay gia tri id
    int getId() {
        return id;
    }

    // Setter thiet lap gia tri id
    void setId(int id) {
        this->id = id;
    }

    // Getter lay gia tri firstName
    string getFirstName() {
        return firstName;
    }

    // Setter thiet lap gia tri firstName
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    // Getter lay gia tri lastName
    string getLastName() {
        return lastName;
    }

    // Setter thiet lap gia tri lastName
    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    // Getter lay ten day du (firstName + lastName)
    string getFullName() {
        return firstName + " " + lastName;
    }

    // Getter lay gia tri salary
    int getSalary() {
        return salary;
    }

    // Setter thiet lap gia tri salary
    void setSalary(int salary) {
        this->salary = salary;
    }
};

int main() {
    int id;
    string firstName;
    string lastName;
    int salary;
    
    // Nhap du lieu tu nguoi dung
    cout << "Nhap ID: ";
    cin >> id;
    
    cout << "Nhap Ten dau: ";
    cin.ignore(); // Bo qua ky tu newline sau khi nhap ID
    getline(cin, firstName); // Lay toan bo firstName
    
    cout << "Nhap Ten cuoi: ";
    getline(cin, lastName); // Lay toan bo lastName
    
    cout << "Nhap Luong: ";
    cin >> salary;
    
    // Tao doi tuong Employee voi du lieu nguoi dung nhap vao
    Employee emp(id, firstName, lastName, salary);
    
    // Hien thi thong tin cua nhan vien
    cout << "ID: " << emp.getId() << endl;
    cout << "Ho va Ten: " << emp.getFullName() << endl;
    cout << "Luong: " << emp.getSalary() << endl;
    
    return 0;
}
