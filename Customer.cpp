#include <iostream>
#include <string>

using namespace std;

// Lớp trừu tượng Person
class Person {
private:
    string name;
    string address;

public:
    // Phương thức khởi tạo
    Person(string name, string address)
        : name(name), address(address) {}

    // Phương thức trừu tượng để hiển thị thông tin
    virtual void display() const = 0;

    // Getter cho name
    string getName() const {
        return name;
    }

    // Getter cho address
    string getAddress() const {
        return address;
    }

    virtual ~Person() {} // Destructor ảo
};

// Lớp Employee kế thừa từ Person
class Employee : public Person {
private:
    int salary;

public:
    // Phương thức khởi tạo
    Employee(string name, string address, int salary)
        : Person(name, address), salary(salary) {}

    // Phương thức ghi đè để hiển thị thông tin nhân viên
    void display() const override {
        cout << "Employee name: " << getName() << endl;
        cout << "Employee address: " << getAddress() << endl;
        cout << "Employee salary: " << salary << endl;
    }
};

// Lớp Customer kế thừa từ Person
class Customer : public Person {
private:
    int balance;

public:
    // Phương thức khởi tạo
    Customer(string name, string address, int balance)
        : Person(name, address), balance(balance) {}

    // Phương thức ghi đè để hiển thị thông tin khách hàng
    void display() const override {
        cout << "Customer name: " << getName() << endl;
        cout << "Customer address: " << getAddress() << endl;
        cout << "Customer balance: " << balance << endl;
    }
};

int main() {
    string name, address;
    int salary, balance;

    // Nhập thông tin cho Employee
    cout << "Enter Employee name: ";
    getline(cin, name);
    cout << "Enter Employee address: ";
    getline(cin, address);
    cout << "Enter Employee salary: ";
    cin >> salary;
    cin.ignore(); // Loai bo ky tu xuong dong con lai trong buffer

    Employee emp(name, address, salary);

    // Nhập thông tin cho Customer
    cout << "Enter Customer name: ";
    getline(cin, name);
    cout << "Enter Customer address: ";
    getline(cin, address);
    cout << "Enter Customer balance: ";
    cin >> balance;

    Customer cust(name, address, balance);

    // Hiển thị thông tin
    cout << endl << "Employee Information:" << endl;
    emp.display();

    cout << endl << "Customer Information:" << endl;
    cust.display();

    return 0;
}
