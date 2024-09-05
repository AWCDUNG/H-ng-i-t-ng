#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

// Lớp Point dùng để lưu trữ tọa độ của một điểm
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

// Lớp PolyLine dùng để lưu trữ và tính toán các điểm của đường gấp khúc
class PolyLine {
private:
    vector<Point> points;   // Sử dụng vector để chứa các điểm

public:
    // Constructor không tham số
    PolyLine() {}

    // Constructor với tham số là danh sách các điểm
    PolyLine(vector<Point> points) {
        this->points = points;
    }

    // Phương thức thêm một điểm vào PolyLine
    void appendPoint(Point point) {
        points.push_back(point);   // Thêm một đối tượng Point vào vector
    }

    // Phương thức thêm một điểm mới vào PolyLine bằng tọa độ x, y
    void appendPoint(int x, int y) {
        points.push_back(Point(x, y));  // Thêm một Point mới vào vector bằng tọa độ x, y
    }

    // Phương thức tính chiều dài của PolyLine
    double getLength() {
        double length = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            int x1 = points[i].getX();
            int y1 = points[i].getY();
            int x2 = points[i + 1].getX();
            int y2 = points[i + 1].getY();
            double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));  // Tính khoảng cách giữa hai điểm liên tiếp
            length += distance;
        }
        return length;   // Trả về tổng chiều dài của PolyLine
    }
};

int main() {
    PolyLine polyLine; // Tạo đối tượng PolyLine
    int n;

    cout << "Nhap so luong diem: "; // Nhập số lượng điểm
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Nhap toa do x va y cho diem " << i + 1 << ": "; // Nhập tọa độ của điểm
        cin >> x >> y;
        polyLine.appendPoint(x, y);  // Thêm điểm vào PolyLine
    }

    // Tinh va in ra chieu dai cua PolyLine
    cout << "Chieu dai cua PolyLine: " << polyLine.getLength() << endl;

    return 0;
}
