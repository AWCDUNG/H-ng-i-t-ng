#include <iostream>
#include <string>

using namespace std;

class Author {
private:
    string name;
    string email;

public:
    Author(string name = "", string email = "") {
        this->name = name;
        this->email = email;
    }

    string getName() const {
        return name;
    }

    string getEmail() const {
        return email;
    }

    void setEmail(string email) {
        this->email = email;
    }
};

class Book {
private:
    string name;
    double price;
    Author* authors;  // Con trỏ mảng động cho danh sách các tác giả
    int authorCount;  // Số lượng tác giả

public:
    // Constructor
    Book(string name, Author* authors, int authorCount, double price) {
        this->name = name;
        this->price = price;
        this->authorCount = authorCount;

        // Cấp phát mảng động và sao chép tác giả vào mảng
        this->authors = new Author[authorCount];
        for (int i = 0; i < authorCount; i++) {
            this->authors[i] = authors[i];
        }
    }

    // Destructor để giải phóng bộ nhớ
    ~Book() {
        delete[] authors;
    }

    // Lấy tên của tất cả các tác giả
    string getAuthorNames() const {
        string authorNames = "";
        for (int i = 0; i < authorCount - 1; i++) {
            authorNames += authors[i].getName() + ", ";
        }
        authorNames += authors[authorCount - 1].getName();
        return authorNames;
    }

    // Hiển thị thông tin sách
    void displayBook() const {
        cout << "Book: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Authors: " << getAuthorNames() << endl;
    }
};

int main() {
    string bookName;
    double bookPrice;
    int authorCount;

    // Nhập thông tin sách từ người dùng
    cout << "Enter the name of the book: ";
    getline(cin, bookName);

    cout << "Enter the price of the book: ";
    cin >> bookPrice;

    cout << "Enter the number of authors: ";
    cin >> authorCount;

    // Cấp phát mảng động cho các tác giả
    Author* authors = new Author[authorCount];

    // Nhập thông tin từng tác giả
    cin.ignore();  // Bỏ qua ký tự xuống dòng sau khi nhập authorCount
    for (int i = 0; i < authorCount; i++) {
        string authorName, authorEmail;

        cout << "Enter the name of author " << i + 1 << ": ";
        getline(cin, authorName);

        cout << "Enter the email of author " << i + 1 << ": ";
        getline(cin, authorEmail);

        authors[i] = Author(authorName, authorEmail);
    }

    // Tạo đối tượng Book và hiển thị thông tin
    Book book(bookName, authors, authorCount, bookPrice);
    book.displayBook();

    // Giải phóng mảng động
    delete[] authors;

    return 0;
}
