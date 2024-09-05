// triangle.cpp

#include <iostream>
#include <cmath>

using namespace std;

// Lớp Point dùng để lưu trữ tọa độ điểm
class Point {
private:
    int x; // Tọa độ x
    int y; // Tọa độ y

public:
    // Constructor không tham số
    Point() {}

    // Constructor với tham số
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Getter và Setter cho tọa độ x
    int getX() {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }

    // Getter và Setter cho tọa độ y
    int getY() {
        return y;
    }

    void setY(int y) {
        this->y = y;
    }
};

// Lớp Triangle dùng để lưu trữ và tính toán các thuộc tính của tam giác
class Triangle {
private:
    Point vertice1; // Đỉnh 1 của tam giác
    Point vertice2; // Đỉnh 2 của tam giác
    Point vertice3; // Đỉnh 3 của tam giác

public:
    // Constructor với tham số là các điểm
    Triangle(Point vertice1, Point vertice2, Point vertice3) {
        this->vertice1 = vertice1;
        this->vertice2 = vertice2;
        this->vertice3 = vertice3;
    }

    // Constructor với tọa độ của các đỉnh
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
        vertice1 = Point(x1, y1);
        vertice2 = Point(x2, y2);
        vertice3 = Point(x3, y3);
    }

    // Phương thức tính chu vi của tam giác
    double getPerimeter() {
        // Tính độ dài cạnh giữa vertice1 và vertice2
        double d1 = sqrt(pow(vertice1.getX() - vertice2.getX(), 2)
            + pow(vertice1.getY() - vertice2.getY(), 2));
        // Tính độ dài cạnh giữa vertice1 và vertice3
        double d2 = sqrt(pow(vertice1.getX() - vertice3.getX(), 2)
            + pow(vertice1.getY() - vertice3.getY(), 2));
        // Tính độ dài cạnh giữa vertice2 và vertice3
        double d3 = sqrt(pow(vertice2.getX() - vertice3.getX(), 2)
            + pow(vertice2.getY() - vertice3.getY(), 2));
        // Tính chu vi bằng tổng ba cạnh
        return d1 + d2 + d3;
    }
};

int main() {
    int x1, y1, x2, y2, x3, y3;

    // Nhập tọa độ các đỉnh của tam giác từ người dùng
    cout << "Nhap toa do dinh thu nhat (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Nhap toa do dinh thu hai (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Nhap toa do dinh thu ba (x3 y3): ";
    cin >> x3 >> y3;

    // Tạo đối tượng Triangle với các tọa độ đã nhập
    Triangle triangle(x1, y1, x2, y2, x3, y3);

    // Tính và hiển thị chu vi của tam giác
    double perimeter = triangle.getPerimeter();
    cout << "Chu vi cua tam giac la: " << perimeter << endl;

    return 0;
}
