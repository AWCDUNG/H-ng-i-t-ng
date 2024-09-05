#include<iostream>
#include<string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor khoi tao gia tri ngay, thang, nam
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Ham setDate thiet lap lai ngay, thang, nam
    void setDate(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Getter lay gia tri day
    int getDay() {
        return day;
    }

    // Setter thiet lap gia tri day
    void setDay(int day) {
        this->day = day;
    }

    // Getter lay gia tri month
    int getMonth() {
        return month;
    }

    // Setter thiet lap gia tri month
    void setMonth(int month) {
        this->month = month;
    }

    // Getter lay gia tri year
    int getYear() {
        return year;
    }

    // Setter thiet lap gia tri year
    void setYear(int year) {
        this->year = year;
    }

    // Ham hien thi ngay thang nam theo dinh dang dd/mm/yyyy
    void display() {
        string dayStr = to_string(this->day);
        string monthStr = to_string(this->month);
        string yearStr = to_string(this->year);

        // Neu day chi co 1 chu so thi them so 0 vao truoc
        if (dayStr.length() == 1) {
            dayStr = "0" + dayStr;
        }

        // Neu month chi co 1 chu so thi them so 0 vao truoc
        if (monthStr.length() == 1) {
            monthStr = "0" + monthStr;
        }

        // Hien thi ngay thang nam theo dinh dang dd/mm/yyyy
        cout << dayStr + "/" + monthStr + "/" + yearStr << endl;
    }
};

int main() {
    int day, month, year;
    
    // Nhap du lieu tu nguoi dung
    cout << "Nhap Ngay: ";
    cin >> day;
    
    cout << "Nhap Thang: ";
    cin >> month;
    
    cout << "Nhap Nam: ";
    cin >> year;
    
    // Tao doi tuong Date voi du lieu nguoi dung nhap vao
    Date date(day, month, year);
    
    // Hien thi ngay thang nam
    cout << "Ngay thang nam: ";
    date.display();
    
    return 0;
}
