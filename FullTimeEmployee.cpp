// employee.cpp

#include <iostream>

using namespace std;

// Lớp cơ sở Employee
class Employee {
private:
    string name; // Tên của nhân viên
    int paymentPerHour; // Tiền lương theo giờ

public:
    // Phuong thuc khoi tao
    Employee(string name, int paymentPerHour) {
        this->name = name;
        this->paymentPerHour = paymentPerHour;
    }

    // Getter và Setter cho tên
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter và Setter cho tiền lương theo giờ
    int getPaymentPerHour() {
        return paymentPerHour;
    }

    void setPaymentPerHour(int paymentPerHour) {
        this->paymentPerHour = paymentPerHour;
    }
    
    // Phuong thuc tinh luong, phải được ghi đè ở lớp con
    virtual int calculateSalary() = 0;
};

// Lớp PartTimeEmployee kế thừa từ Employee
class PartTimeEmployee : public Employee {
private:
    int workingHours; // Số giờ làm việc

public:
    // Phuong thuc khoi tao
    PartTimeEmployee(string name, int paymentPerHour, int workingHours)
        : Employee(name, paymentPerHour), workingHours(workingHours) {}

    // Triển khai phương thức tính lương
    int calculateSalary() override {
        return workingHours * getPaymentPerHour();
    }
};

// Lớp FullTimeEmployee kế thừa từ Employee
class FullTimeEmployee : public Employee {
public:
    // Phuong thuc khoi tao
    FullTimeEmployee(string name, int paymentPerHour)
        : Employee(name, paymentPerHour) {}

    // Triển khai phương thức tính lương
    int calculateSalary() override {
        return 8 * getPaymentPerHour(); // Giả định 8 giờ làm việc mỗi ngày
    }
};

int main() {
    string name;
    int paymentPerHour;
    int workingHours;

    // Nhap thong tin cho PartTimeEmployee
    cout << "Nhap ten nhan vien ban thoi gian: ";
    getline(cin, name);
    cout << "Nhap tien luong theo gio: ";
    cin >> paymentPerHour;
    cout << "Nhap so gio lam viec: ";
    cin >> workingHours;

    // Tạo đối tượng PartTimeEmployee
    PartTimeEmployee partTimeEmployee(name, paymentPerHour, workingHours);
    cout << "Luong ban thoi gian: " << partTimeEmployee.calculateSalary() << endl;

    // Nhap thong tin cho FullTimeEmployee
    cin.ignore(); // Xóa bộ đệm nhập trước khi nhập lại
    cout << "Nhap ten nhan vien toan thoi gian: ";
    getline(cin, name);
    cout << "Nhap tien luong theo gio: ";
    cin >> paymentPerHour;

    // Tạo đối tượng FullTimeEmployee
    FullTimeEmployee fullTimeEmployee(name, paymentPerHour);
    cout << "Luong toan thoi gian: " << fullTimeEmployee.calculateSalary() << endl;

    return 0;
}
