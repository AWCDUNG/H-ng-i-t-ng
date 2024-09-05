#include <iostream>
#include <cmath> // Thư viện chính xác cho sqrt và pow

using namespace std;

// Lớp Point đại diện cho một điểm trong hệ tọa độ 2D
class Point {
private:
    int x; // Tọa độ x của điểm
    int y; // Tọa độ y của điểm
public:
    // Constructor không đối số (khởi tạo điểm với tọa độ (0, 0))
    Point() {}

    // Constructor với hai đối số để khởi tạo tọa độ x và y
    Point(int x, int y) : x(x), y(y) {}

    // Phương thức lấy tọa độ x
    int getX() const {
        return x;
    }

    // Phương thức đặt tọa độ x
    void setX(int x) {
        this->x = x;
    }

    // Phương thức lấy tọa độ y
    int getY() const {
        return y;
    }

    // Phương thức đặt tọa độ y
    void setY(int y) {
        this->y = y;
    }
};

// Lớp Line đại diện cho một đoạn thẳng giữa hai điểm
class Line {
private:
    Point begin; // Điểm bắt đầu của đoạn thẳng
    Point end;   // Điểm kết thúc của đoạn thẳng
public:
    // Constructor với hai điểm Point để khởi tạo đoạn thẳng
    Line(Point begin, Point end) : begin(begin), end(end) {}

    // Constructor với tọa độ của hai điểm để khởi tạo đoạn thẳng
    Line(int x1, int y1, int x2, int y2) : begin(x1, y1), end(x2, y2) {}

    // Phương thức lấy điểm bắt đầu
    Point getBegin() const {
        return begin;
    }

    // Phương thức đặt điểm bắt đầu
    void setBegin(Point begin) {
        this->begin = begin;
    }

    // Phương thức lấy điểm kết thúc
    Point getEnd() const {
        return end;
    }

    // Phương thức đặt điểm kết thúc
    void setEnd(Point end) {
        this->end = end;
    }

    // Phương thức tính độ dài đoạn thẳng sử dụng định lý Pythagoras
    double getLength() const {
        return sqrt(pow(end.getX() - begin.getX(), 2) + pow(end.getY() - begin.getY(), 2));
    }
};

int main() {
    char choice;
    
    do {
        // Khai báo các điểm và đoạn thẳng
        int x1, y1, x2, y2;

        // Nhập tọa độ cho điểm bắt đầu và điểm kết thúc của đoạn thẳng
        cout << "Enter the coordinates of the beginning point:" << endl;
        cout << "x1: ";
        cin >> x1;
        cout << "y1: ";
        cin >> y1;

        cout << "Enter the coordinates of the ending point:" << endl;
        cout << "x2: ";
        cin >> x2;
        cout << "y2: ";
        cin >> y2;

        // Tạo đối tượng Line với các tọa độ đã nhập
        Line line(x1, y1, x2, y2);

        // Hiển thị độ dài của đoạn thẳng
        cout << "Length of the line: " << line.getLength() << endl;

        // Hỏi người dùng có muốn nhập thêm đoạn thẳng không
        cout << "Do you want to enter another line? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Lặp lại nếu người dùng chọn 'y' hoặc 'Y'

    return 0;
}
