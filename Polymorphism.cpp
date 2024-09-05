#include <iostream>

using namespace std;

class Animal {
public:
	virtual void sound() {
		cout << "some sound" << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "bow wow" << endl;
	}
};

class Cat : public Animal {
public:
	void sound() {
		cout << "meow meow" << endl;
	}
};

class Duck : public Animal {
public:
	void sound() {
		cout << "quack quack" << endl;
	}
};

int main() {
	Animal* animal = new Animal();
	animal->sound();
	animal = new Dog();
	animal->sound();
	animal = new Duck();
	animal->sound();
	animal = new Cat();
	animal->sound();
	return 0;

}    