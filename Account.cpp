#include <iostream>
using namespace std;

class Account {
private:
    int id;
    string name;
    int balance = 0;

public:
    // Constructor khoi tao id va name
    Account(int id, string name) {
        this->id = id;
        this->name = name;
    }

    // Constructor khoi tao id, name, va balance
    Account(int id, string name, int balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    // Getter lay gia tri id
    int getId() {
        return id;
    }

    // Getter lay gia tri name
    string getName() {
        return name;
    }

    // Setter thiet lap gia tri name
    void setName(string name) {
        this->name = name;
    }

    // Getter lay gia tri balance
    int getBalance() {
        return balance;
    }

    // Ham nap tien vao tai khoan
    void deposit(int amount) {
        balance += amount;
    }

    // Ham rut tien tu tai khoan
    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "So tien rut vuot qua so du hien tai." << endl;
        }
    }

    // Ham hien thi thong tin tai khoan
    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int id, balance;
    string name;

    // Nhap thong tin cho tai khoan
    cout << "Nhap ID: ";
    cin >> id;

    cout << "Nhap Ten: ";
    cin.ignore(); // Bo qua ky tu newline
    getline(cin, name);

    cout << "Nhap So du (neu co): ";
    cin >> balance;

    // Tao doi tuong Account voi du lieu nguoi dung nhap vao
    Account acc(id, name, balance);

    // Hien thi thong tin tai khoan
    cout << "Thong tin tai khoan:" << endl;
    acc.display();

    // Nap tien
    int depositAmount;
    cout << "Nhap so tien nap: ";
    cin >> depositAmount;
    acc.deposit(depositAmount);
    cout << "Thong tin tai khoan sau khi nap tien:" << endl;
    acc.display();

    // Rut tien
    int withdrawAmount;
    cout << "Nhap so tien rut: ";
    cin >> withdrawAmount;
    acc.withdraw(withdrawAmount);
    cout << "Thong tin tai khoan sau khi rut tien:" << endl;
    acc.display();

    return 0;
}
