#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "some sound" << endl;
    }

    virtual ~Animal() {} // Destructor ảo để đảm bảo hủy đối tượng lớp con
};

class Dog : public Animal {
public:
    void sound() override { // Ghi de phuong thuc sound
        cout << "bow wow" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override { // Ghi de phuong thuc sound
        cout << "meow meow" << endl;
    }
};

class Duck : public Animal {
public:
    void sound() override { // Ghi de phuong thuc sound
        cout << "quack quack" << endl;
    }
};

int main() {
    Animal* animals[4];
    animals[0] = new Animal();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Duck();
    
    for (int i = 0; i < 4; i++) {
        animals[i]->sound();
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    return 0;
}
