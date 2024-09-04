#include<iostream>
#include<string>
using namespace std;

// Lớp đại diện cho một Sinh viên
class Student {
    // Các biến thành viên riêng
    string name;   // Tên của sinh viên
    int age;       // Tuổi của sinh viên
    string gender; // Giới tính của sinh viên
    double gpa;    // Điểm GPA của sinh viên
public:
    // Hàm tạo mặc định
    Student() {}

    // Hàm để nhập thông tin sinh viên từ người dùng
    void getInformation() {
        cout << "Nhập tên: ";
        getline(cin, name);  // Nhập tên của sinh viên

        cout << "Nhập tuổi: ";
        cin >> age;          // Nhập tuổi của sinh viên

        cin.ignore();  // Xóa ký tự xuống dòng trong bộ đệm sau khi nhập số

        cout << "Nhập giới tính: ";
        getline(cin, gender); // Nhập giới tính của sinh viên

        cout << "Nhập GPA: ";
        cin >> gpa;          // Nhập GPA của sinh viên
    }

    // Hàm để hiển thị thông tin sinh viên
    void display() {
        cout << "Tên: " << name << endl;        // Hiển thị tên
        cout << "Tuổi: " << age << endl;        // Hiển thị tuổi
        cout << "Giới tính: " << gender << endl; // Hiển thị giới tính
        cout << "GPA: " << gpa << endl;          // Hiển thị GPA
    }
};

int main() {
    Student s1;  // Tạo một đối tượng Sinh viên

    // Nhập thông tin cho sinh viên
    s1.getInformation();

    // Hiển thị thông tin của sinh viên
    s1.display();
    
    return 0;  // Kết thúc chương trình
}
