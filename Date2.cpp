#include<iostream>
#include<string>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor khoi tao gia tri hour, minute, second
    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // Ham setTime thiet lap lai hour, minute, second
    void setTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    // Getter lay gia tri hour
    int getHour() {
        return hour;
    }

    // Setter thiet lap gia tri hour
    void setHour(int hour) {
        this->hour = hour;
    }

    // Getter lay gia tri minute
    int getMinute() {
        return minute;
    }

    // Setter thiet lap gia tri minute
    void setMinute(int minute) {
        this->minute = minute;
    }

    // Getter lay gia tri second
    int getSecond() {
        return second;
    }

    // Setter thiet lap gia tri second
    void setSecond(int second) {
        this->second = second;
    }

    // Ham giam 1 giay
    void previousSecond() {
        if (hour == 0 && minute == 0 && second == 0) {
            hour = 23;
            minute = 59;
            second = 59;
            return;
        }
        if (minute == 0 && second == 0) {
            hour--;
            minute = 59;
            second = 59;
            return;
        }
        if (second == 0) {
            minute--;
            second = 59;
            return;
        }
        second--;
    }

    // Ham tang 1 giay
    void nextSecond() {
        if (hour == 23 && minute == 59 && second == 59) {
            hour = 0;
            minute = 0;
            second = 0;
            return;
        }
        if (minute == 59 && second == 59) {
            hour++;
            minute = 0;
            second = 0;
            return;
        }
        if (second == 59) {
            minute++;
            second = 0;
            return;
        }
        second++;
    }

    // Ham hien thi gio phut giay theo dinh dang hh:mm:ss
    void display() {
        string hourStr = to_string(this->hour);
        string minuteStr = to_string(this->minute);
        string secondStr = to_string(this->second);
        if (hourStr.length() == 1)
            hourStr = "0" + hourStr;
        if (minuteStr.length() == 1)
            minuteStr = "0" + minuteStr;
        if (secondStr.length() == 1)
            secondStr = "0" + secondStr;
        cout << hourStr + ":" + minuteStr + ":" + secondStr << endl;
    }
};

int main() {
    int hour, minute, second;
    
    // Nhap du lieu tu nguoi dung
    cout << "Nhap Gio (0-23): ";
    cin >> hour;
    
    cout << "Nhap Phut (0-59): ";
    cin >> minute;
    
    cout << "Nhap Giay (0-59): ";
    cin >> second;
    
    // Tao doi tuong Time voi du lieu nguoi dung nhap vao
    Time t(hour, minute, second);
    
    // Hien thi gio, phut, giay
    cout << "Thoi gian hien tai: ";
    t.display();
    
    // Tang 1 giay va hien thi
    t.nextSecond();
    cout << "Thoi gian sau khi tang 1 giay: ";
    t.display();
    
    // Giam 1 giay va hien thi
    t.previousSecond();
    cout << "Thoi gian sau khi giam 1 giay: ";
    t.display();
    
    return 0;
}
