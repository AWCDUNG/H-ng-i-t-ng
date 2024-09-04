#include <iostream>
using namespace std;

class Student 
{
private:
    string name;
    char gender;

public:
    // Constructor mặc định
    Student() : name("Unknown"), gender('u') {}

    // Constructor với tên
    Student(string name) : name(name), gender('u') {}

    // Constructor với giới tính
    Student(char gender) : name("Unknown"), gender(gender) {}

    // Constructor với tên và giới tính
    Student(string name, char gender) : name(name), gender(gender) {}

    // Hàm hiển thị thông tin sinh viên
    void display() const {
        cout << "Name: " << name << endl;
        switch (gender) {
            case 'm':
                cout << "Gender: Male" << endl;
                break;
            case 'f':
                cout << "Gender: Female" << endl;
                break;
            case 'u':
                cout << "Gender: Unknown" << endl;
                break;
            default:
                cout << "Gender: Invalid" << endl;
                break;
        }
    }

    // Hàm nhập thông tin sinh viên từ người dùng
    // Hàm nhập thông tin sinh viên từ người dùng
void input() {
    cout << "Enter name: ";
    cin.ignore(); // Bỏ qua ký tự newline còn lại từ nhập trước đó
    getline(cin, name); // Nhập tên với khoảng trắng

    cout << "Enter gender (m/f/u): ";
    cin >> gender;
    gender = tolower(gender); // Chuyển đổi giới tính về chữ thường để đơn giản hóa so sánh

    // Kiểm tra giới tính hợp lệ
    while (gender != 'm' && gender != 'f' && gender != 'u') {
        cout << "Invalid gender. Please enter again (m/f/u): ";
        cin >> gender;
        gender = tolower(gender);
    }
    
    // Bỏ qua ký tự newline còn lại từ nhập giới tính
    cin.ignore();
}

};

int main() {
    Student student;

    // Nhập thông tin từ người dùng
    student.input();
    
    // Hiển thị thông tin của sinh viên
    student.display();

    return 0; // Kết thúc chương trình
}
