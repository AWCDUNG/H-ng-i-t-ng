#include <iostream>
#include <cmath>  // Thư viện để sử dụng hàm pow()
using namespace std;

// Lớp đại diện cho hình tròn
class Circle {
private:
    double radius;  // Bán kính của hình tròn
public:
    // Hàm tạo để khởi tạo bán kính
    Circle(double radius) {
        this->radius = radius;  // Gán giá trị bán kính
    }    

    // Hàm để tính diện tích hình tròn
    double getArea() {
        return 3.14 * pow(radius, 2);  // Diện tích = π * r^2
    }

    // Hàm để tính chu vi hình tròn
    double getCircumference() {
        return 3.14 * 2 * radius;  // Chu vi = 2 * π * r
    }
};

int main() {
    double r;
    
    // Yêu cầu người dùng nhập bán kính
    cout << "Nhập bán kính của hình tròn: ";
    cin >> r;

    // Tạo đối tượng Circle với bán kính người dùng đã nhập
    Circle c(r);

    // Hiển thị diện tích và chu vi của hình tròn
    cout << "Diện tích hình tròn: " << c.getArea() << endl;
    cout << "Chu vi hình tròn: " << c.getCircumference() << endl;

    return 0;  // Kết thúc chương trình
}
