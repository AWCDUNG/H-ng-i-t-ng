#include<iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string address;
    int score;
public:
    // Constructor khong doi so
    Student() {

    }

    // Constructor co doi so
    Student(int id, string name, int age, string address, int score) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->address = address;
        this->setScore(score); // Goi ham setScore de kiem tra diem hop le
    }

    // Getter lay gia tri id
    int getId() {
        return id;
    }

    // Setter thiet lap gia tri id
    void setId(int id) {
        this->id = id;
    }

    // Getter lay gia tri name
    string getName() {
        return name;
    }

    // Setter thiet lap gia tri name
    void setName(string name) {
        this->name = name;
    }

    // Getter lay gia tri age
    int getAge() {
        return age;
    }

    // Setter thiet lap gia tri age
    void setAge(int age) {
        this->age = age;
    }

    // Getter lay gia tri address
    string getAddress() {
        return address;
    }

    // Setter thiet lap gia tri address
    void setAddress(string address) {
        this->address = address;
    }

    // Getter lay gia tri score
    int getScore() {
        return score;
    }

    // Setter thiet lap gia tri score va kiem tra diem hop le
    void setScore(int score) {
        if (score < 0) { 
            this->score = 0; // Neu diem < 0 thi gan bang 0
        } else if (score > 10) { 
            this->score = 10; // Neu diem > 10 thi gan bang 10
        } else {
            this->score = score; // Neu diem hop le thi giu nguyen
        }
    }
};

int main() {
    int id;
    string name;
    int age;
    string address;
    int score;
    
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
    
    cout << "Nhap Diem: ";
    cin >> score;
    
    // Tao doi tuong Student voi du lieu nguoi dung nhap vao
    Student s(id, name, age, address, score);
    
    // Hien thi thong tin cua sinh vien
    cout << "Id: " << s.getId() << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Address: " << s.getAddress() << endl;
    cout << "Score: " << s.getScore() << endl;
    
    return 0;
}
