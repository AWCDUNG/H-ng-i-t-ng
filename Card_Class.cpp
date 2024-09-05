#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

// Lớp Card đại diện cho thông tin của một cuốn sách
class Card {
private:
    string nameBook;  // Tên sách
    string nameAuthor;  // Tên tác giả
    int numberBook;  // Số thứ tự hoặc số định danh của sách
public:
    // Constructor mặc định
    Card() {}

    // Constructor có tham số để khởi tạo đối tượng với các giá trị đầu vào
    Card(string nameBook, string nameAuthor, int numberBook) {
        this->nameBook = nameBook;  // Gán giá trị tên sách
        this->nameAuthor = nameAuthor;  // Gán giá trị tên tác giả
        this->numberBook = numberBook;  // Gán giá trị số sách
    }

    // Hàm hiển thị thông tin của cuốn sách
    void display() {
        cout << "Name Book: " << this->nameBook << endl;
        cout << "Name Author: " << this->nameAuthor << endl;
        cout << "Number Book: " << this->numberBook << endl;
    }

    // Hàm trả về giá trị số sách (numberBook)
    int getNumBook() {
        return this->numberBook;
    }

    // Hàm tĩnh để sắp xếp các cuốn sách trong vector theo số sách (numberBook)
    static void sortCards(vector<Card>& cards) {
        // Sử dụng thuật toán sắp xếp bubble sort
        for (int i = 0; i < cards.size() - 1; i++) {
            for (int j = i + 1; j < cards.size(); j++) {
                // So sánh số sách của hai cuốn và hoán đổi nếu cần thiết
                if (cards[i].getNumBook() > cards[j].getNumBook()) {
                    swap(cards[i], cards[j]);
                }
            }
        }
    }
};

int main() {
    // Tạo một vector chứa các đối tượng Card
    vector<Card> cards;
    
    // Thêm các đối tượng Card vào vector
    cards.push_back(Card("The Alchemist", "Paulo Coelho", 2));
    cards.push_back(Card("1984", "George Orwell", 1));
    cards.push_back(Card("To Kill a Mockingbird", "Harper Lee", 3));

    // Hiển thị danh sách các cuốn sách trước khi sắp xếp
    cout << "Cards before sorting:\n";
    for (auto &card : cards) {
        card.display();
        cout << endl;
    }

    // Gọi hàm sắp xếp các cuốn sách theo số sách
    Card::sortCards(cards);

    // Hiển thị danh sách các cuốn sách sau khi sắp xếp
    cout << "Cards after sorting:\n";
    for (auto &card : cards) {
        card.display();
        cout << endl;
    }

    return 0;
}
