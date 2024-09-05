#include <iostream>
using namespace std;

class Animal {
public:
	void sound() {
		cout << "some sound" << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "woof woof" << endl;
	}
	void play() {
		cout << "The dog is playing" << endl;
	}
};

int main() {
	Animal animal;
	Dog* d = (Dog*)&animal;

	d->sound();
	d->play();

	return 0;
}