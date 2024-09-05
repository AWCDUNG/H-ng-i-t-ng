#include <iostream>
#include <cmath>  // Thay "math.h" bằng "cmath" cho C++

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // Constructor mac dinh
    Point() {
    }

    // Constructor khoi tao x, y
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Getter lay gia tri x
    double getX() {
        return x;
    }

    // Setter thiet lap gia tri x
    void setX(double x) {
        this->x = x;
    }

    // Getter lay gia tri y
    double getY() {
        return y;
    }

    // Setter thiet lap gia tri y
    void setY(double y) {
        this->y = y;
    }

    // Setter thiet lap ca x va y
    void setXY(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Ham tinh khoang cach den diem (x, y)
    double distance(double x, double y) {
        return sqrt((this->x - x) * (this->x - x) + (this->y - y) * (this->y - y));
    }

    // Ham tinh khoang cach den diem khac
    double distance(Point another) {
        return distance(another.getX(), another.getY());
    }
};

int main() {
    double x1, y1, x2, y2;

    // Nhap toan do cua diem 1
    cout << "Nhap toa do diem 1 (x1 y1): ";
    cin >> x1 >> y1;

    // Nhap toan do cua diem 2
    cout << "Nhap toa do diem 2 (x2 y2): ";
    cin >> x2 >> y2;

    // Tao doi tuong Point cho diem 1 va diem 2
    Point p1(x1, y1);
    Point p2(x2, y2);

    // Tinh khoang cach giua 2 diem
    double dist = p1.distance(p2);

    // Hien thi khoang cach
    cout << "Khoang cach giua diem 1 va diem 2: " << dist << endl;

    return 0;
}
