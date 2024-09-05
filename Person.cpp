#include<iostream>
using namespace std;

class Person {
private:
    int id;
    string name;
    int age;
    string address;
public:
    // Constructor
    Person(int id, string name, int age, string address) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
    }
    
    // Cac phuong thuc lay thong tin
    int getId() {
        return id;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getAddress() {
        return address;
    }
};

int main() {
    int id;
    string name;
    int age;
    string address;
    
    // Nhap du lieu tu nguoi dung
    cout << "Nhap ID: ";
    cin >> id;
    
    cout << "Nhap Ten: ";
    cin.ignore(); // Bo qua ky tu newline sau khi nhap ID
    getline(cin, name); // Lay toan bo ten ke ca khoang trang
    
    cout << "Nhap Tuoi: ";
    cin >> age;
    
    cout << "Nhap Dia chi: ";
    cin.ignore(); // Bo qua newline truoc khi lay dia chi
    getline(cin, address); // Lay toan bo dia chi ke ca khoang trang
    
    // Tao doi tuong Person voi du lieu nguoi dung nhap vao
    Person p(id, name, age, address);
    
    // Hien thi thong tin cua doi tuong Person
    cout << "Id: " << p.getId() << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Address: " << p.getAddress() << endl;
    
    return 0;
}
