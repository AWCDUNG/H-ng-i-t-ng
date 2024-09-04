#include <iostream>
#include <cmath>

using namespace std;

class Math {
public:
    // Hàm tính giá trị tuyệt đối
    static int abs(int x) {
        return x < 0 ? -x : x;
    }

    // Hàm cộng hai số
    static int add(int x, int y) {
        return x + y;
    }

    // Hàm trừ hai số
    static int subtract(int x, int y) {
        return x - y;
    }

    // Hàm tìm giá trị nhỏ hơn trong hai số
    static int min(int x, int y) {
        return x < y ? x : y;
    }

    // Hàm tìm giá trị lớn hơn trong hai số
    static int max(int x, int y) {
        return x > y ? x : y;
    }

    // Hàm tính lũy thừa x^y
    static int pow(int x, int y) {
        int power = 1;
        for (int i = 0; i < y; i++) {
            power *= x;
        }
        return power;
    }
};

int main() {
    int a, b, y;

    // Nhập giá trị cho hàm abs()
    cout << "Nhập một số để tính giá trị tuyệt đối: ";
    cin >> a;
    cout << "Giá trị tuyệt đối của " << a << " là: " << Math::abs(a) << endl;

    // Nhập giá trị cho hàm add() và subtract()
    cout << "Nhập hai số để cộng: ";
    cin >> a >> b;
    cout << "Tổng của " << a << " và " << b << " là: " << Math::add(a, b) << endl;

    cout << "Nhập hai số để trừ: ";
    cin >> a >> b;
    cout << "Hiệu của " << a << " và " << b << " là: " << Math::subtract(a, b) << endl;

    // Nhập giá trị cho hàm min() và max()
    cout << "Nhập hai số để so sánh: ";
    cin >> a >> b;
    cout << "Số nhỏ hơn trong hai số là: " << Math::min(a, b) << endl;
    cout << "Số lớn hơn trong hai số là: " << Math::max(a, b) << endl;

    // Nhập giá trị cho hàm pow()
    cout << "Nhập cơ số và số mũ để tính lũy thừa (x^y): ";
    cin >> a >> y;
    cout << a << " lũy thừa " << y << " là: " << Math::pow(a, y) << endl;

    return 0;
}
