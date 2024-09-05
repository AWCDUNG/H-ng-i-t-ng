// shapes.cpp

#include <iostream>
#include <cmath> // Để sử dụng M_PI cho giá trị pi chính xác hơn

using namespace std;

// Lớp cơ sở Shape
class Shape {
public:
    virtual double getArea() = 0; // Phuong thuc thuong ảo tính diện tích
    virtual double getPerimeter() = 0; // Phuong thuc thuong ảo tính chu vi
    virtual ~Shape() {} // Destructor ảo để hủy đối tượng lớp con
};

// Lớp Rectangle kế thừa từ Shape
class Rectangle : public Shape {
private:
    double length; // Độ dài
    double width;  // Độ rộng

public:
    Rectangle(double length, double width) { // Phuong thuc khoi tao
        this->length = length;
        this->width = width;
    }

    double getArea() override { // Triển khai phương thức tính diện tích
        return length * width;
    }

    double getPerimeter() override { // Triển khai phương thức tính chu vi
        return (length + width) * 2;
    }
};

// Lớp Circle kế thừa từ Shape
class Circle : public Shape {
private:
    double radius; // Bán kính

public:
    Circle(double radius) { // Phuong thuc khoi tao
        this->radius = radius;
    }

    double getArea() override { // Triển khai phương thức tính diện tích
        return M_PI * radius * radius; // Sử dụng M_PI từ thư viện cmath
    }

    double getPerimeter() override { // Triển khai phương thức tính chu vi
        return 2 * M_PI * radius;
    }
};

int main() {
    double length, width, radius;

    // Nhập thông tin cho Rectangle
    cout << "Nhap do dai cua hinh chu nhat: ";
    cin >> length;
    cout << "Nhap do rong cua hinh chu nhat: ";
    cin >> width;

    // Nhập thông tin cho Circle
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> radius;

    // Tạo các đối tượng Shape với dữ liệu nhập vào
    Shape* shapes[2];
    shapes[0] = new Rectangle(length, width); // Tạo đối tượng Rectangle
    shapes[1] = new Circle(radius); // Tạo đối tượng Circle

    // Hiển thị diện tích và chu vi của từng hình
    for (int i = 0; i < 2; i++) {
        cout << "Area: " << shapes[i]->getArea() << endl; // Hiển thị diện tích
        cout << "Perimeter: " << shapes[i]->getPerimeter() << endl; // Hiển thị chu vi
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}
