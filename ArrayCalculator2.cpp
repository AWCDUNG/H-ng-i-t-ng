#include <iostream>
using namespace std;

class ArrayCalculator
{
public:
    // Hàm tĩnh tìm giá trị lớn nhất trong mảng số nguyên
    static int maxOfArray(int arr[], int n) {
        int maxValue = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > maxValue) {
                maxValue = arr[i]; // Cập nhật giá trị lớn nhất
            }
        }
        return maxValue;
    }

    // Hàm tĩnh tìm giá trị lớn nhất trong mảng số thực
    static double maxOfArray(double arr[], int n) {
        double maxValue = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > maxValue) {
                maxValue = arr[i]; // Cập nhật giá trị lớn nhất
            }
        }
        return maxValue;
    }

    // Hàm tĩnh tìm giá trị nhỏ nhất trong mảng số nguyên
    static int minOfArray(int arr[], int n) {
        int minValue = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] < minValue) {
                minValue = arr[i]; // Cập nhật giá trị nhỏ nhất
            }
        }
        return minValue;
    }

    // Hàm tĩnh tìm giá trị nhỏ nhất trong mảng số thực
    static double minOfArray(double arr[], int n) {
        double minValue = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] < minValue) {
                minValue = arr[i]; // Cập nhật giá trị nhỏ nhất
            }
        }
        return minValue;
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

    // Tính và hiển thị giá trị lớn nhất và nhỏ nhất của mảng số nguyên
    cout << "Gia tri lon nhat cua mang so nguyen la " << ArrayCalculator::maxOfArray(intArray, n) << endl;
    cout << "Gia tri nho nhat cua mang so nguyen la " << ArrayCalculator::minOfArray(intArray, n) << endl;

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

    // Tính và hiển thị giá trị lớn nhất và nhỏ nhất của mảng số thực
    cout << "Gia tri lon nhat cua mang so thuc la " << ArrayCalculator::maxOfArray(doubleArray, n) << endl;
    cout << "Gia tri nho nhat cua mang so thuc la " << ArrayCalculator::minOfArray(doubleArray, n) << endl;

    delete[] doubleArray; // Giải phóng bộ nhớ

    return 0; // Kết thúc chương trình
}
