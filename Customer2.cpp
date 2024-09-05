#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    int id; // ID của khách hàng
    string name; // Tên khách hàng
    int discount; // Mức giảm giá của khách hàng

public:
    // Constructor mặc định
    Customer() {}

    // Constructor với tham số
    Customer(int id, string name, int discount) {
        this->id = id; // Khởi tạo ID
        this->name = name; // Khởi tạo tên
        this->discount = discount; // Khởi tạo giảm giá
    }

    // Getter cho ID
    int getID() const {
        return id;
    }

    // Getter cho tên
    string getName() const {
        return name;
    }

    // Setter cho tên
    void setName(string name) {
        this->name = name;
    }

    // Getter cho giảm giá
    int getDiscount() const {
        return discount;
    }

    // Setter cho giảm giá
    void setDiscount(int discount) {
        this->discount = discount;
    }
};

class Invoke {
private:
    Customer customer; // Đối tượng khách hàng
    int id; // ID của giao dịch
    double amount; // Số tiền giao dịch

public:
    // Constructor với tham số
    Invoke(int id, Customer customer, double amount) {
        this->id = id; // Khởi tạo ID giao dịch
        this->customer = customer; // Khởi tạo đối tượng khách hàng
        this->amount = amount; // Khởi tạo số tiền giao dịch
    }

    // Getter cho ID
    int getId() const {
        return id;
    }

    // Getter cho đối tượng khách hàng
    Customer getCustomer() const {
        return customer;
    }

    // Setter cho đối tượng khách hàng
    void setCustomer(Customer customer) {
        this->customer = customer;
    }

    // Getter cho số tiền
    double getAmount() const {
        return amount;
    }

    // Setter cho số tiền
    void setAmount(double amount) {
        this->amount = amount;
    }

    // Lấy tên khách hàng từ đối tượng khách hàng
    string getCustomerName() const {
        return customer.getName();
    }

    // Tính số tiền sau khi giảm giá
    double getAmountAfterDiscount() const {
        return amount - (amount * customer.getDiscount() / 100.0);
    }
};

int main() {
    int customerId; // ID của khách hàng
    string customerName; // Tên khách hàng
    int customerDiscount; // Giảm giá của khách hàng
    int invokeId; // ID của giao dịch
    double invokeAmount; // Số tiền giao dịch

    // Nhập thông tin khách hàng
    cout << "Enter Customer ID: ";
    cin >> customerId; // Nhập ID khách hàng

    cout << "Enter Customer Name: ";
    cin.ignore(); // Bỏ qua ký tự newline còn lại trong buffer
    getline(cin, customerName); // Nhập tên khách hàng

    cout << "Enter Customer Discount (in percentage): ";
    cin >> customerDiscount; // Nhập giảm giá của khách hàng

    // Tạo đối tượng Customer với thông tin đã nhập
    Customer customer(customerId, customerName, customerDiscount);

    // Nhập thông tin giao dịch
    cout << "Enter Invoke ID: ";
    cin >> invokeId; // Nhập ID giao dịch

    cout << "Enter Amount: ";
    cin >> invokeAmount; // Nhập số tiền giao dịch

    // Tạo đối tượng Invoke với thông tin đã nhập
    Invoke invoke(invokeId, customer, invokeAmount);

    // Hiển thị thông tin giao dịch
    cout << "Customer Name: " << invoke.getCustomerName() << endl; // Hiển thị tên khách hàng
    cout << "Amount After Discount: $" << invoke.getAmountAfterDiscount() << endl; // Hiển thị số tiền sau giảm giá

    return 0;
}
