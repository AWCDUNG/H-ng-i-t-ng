#include <iostream>
using namespace std;

class ArrayCalculator {
public:
    // Hàm tĩnh tính tổng của mảng số nguyên
    static int sumOfArray(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Hàm tĩnh tính tổng của mảng số thực
    static double sumOfArray(double arr[], int n) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    int n;

    // Nhập kích thước mảng số nguyên
    cout << "Nhap so luong phan tu cua mang so nguyen ";
    cin >> n;
    int* intArray = new int[n]; // Cấp phát bộ nhớ cho mảng số nguyên

    // Nhập các phần tử của mảng số nguyên
    cout << "Nhap cac phan tu cua mang so nguyen ";
    for (int i = 0; i < n; i++) {
        cin >> intArray[i];
    }

    // Tính và hiển thị tổng của mảng số nguyên
    cout << "Tong cua mang so nguyen la " << ArrayCalculator::sumOfArray(intArray, n) << endl;

    delete[] intArray; // Giải phóng bộ nhớ

    // Nhập kích thước mảng số thực
    cout << "Nhap so luong phan tu cua mang so thuc ";
    cin >> n;
    double* doubleArray = new double[n]; // Cấp phát bộ nhớ cho mảng số thực

    // Nhập các phần tử của mảng số thực
    cout << "Nhap cac phan tu cua mang so thuc ";
    for (int i = 0; i < n; i++) {
        cin >> doubleArray[i];
    }

    // Tính và hiển thị tổng của mảng số thực
    cout << "Tong cua mang so thuc la " << ArrayCalculator::sumOfArray(doubleArray, n) << endl;

    delete[] doubleArray; // Giải phóng bộ nhớ

    return 0; // Kết thúc chương trình
}
