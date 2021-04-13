#include <iostream>
#include <ctime>
using namespace std;

class Pet {
public:
	Pet(int m,int x, int z, int c, int h);
	~Pet();
	Pet(const Pet& tamagochi);
	void set_id(int i);
	void set_name(string nm);
	void get_old();
	void damage();
	void heal();
	void get_sick();
	void starve();
	void feed();
	void sad();
	void happy();
private:
	int* id;
	string* name;
	int* age;
	int* health;
	int* mood;
	bool* is_ill;
	int* hunger;
	bool c_ill;
	int c_age;
	int c_health;
	int c_mood;
	int c_hunger;
};

Pet::Pet(int m,int x, int z, int c, int h) {
	is_ill = new bool(m);
	age = new int(z);
	health = new int(x);
	mood = new int(c);
	hunger = new int(h);
	c_ill = m;
	c_age = z;
	c_health = x;
	c_mood = c;
	c_hunger = h;
}
Pet::Pet(const Pet& tamagochi) {
	is_ill = new bool(tamagochi.c_ill);
	age = new int(tamagochi.c_age);
	health = new int(tamagochi.c_health);
	mood = new int(tamagochi.c_mood);
	hunger = new int(tamagochi.c_hunger);

}
//Drob(const Drob& drob) :
	//m_numerator(drob.m_numerator), m_denominator(drob.m_denominator)
//}
void Pet::set_id(int i) {
	this->id = new int(i);
}

void Pet::set_name(string nm) {
	this->name = new string(nm);
}

void Pet::get_old() {
	this->age++;
}

void Pet::damage() {
	this->health--;
}

void Pet::heal() {
	this->health++;
	*(this->is_ill) = false;
}

void Pet::get_sick() {
	srand(time(0));
	int rn = rand() % 2 + 1;
	if (rn == 1) {
		*is_ill = true;
	}
	else {
		*is_ill = false;
	}
}

void Pet::starve() {
	this->hunger++;
}

void Pet::feed() {
	this->hunger--;
}

void Pet::sad() {
	if (mood > 0) {
		this->mood--;
	}
}

void Pet::happy() {
	this->mood++;
}

Pet::~Pet() {
	delete id;
	delete name;
	delete age;
	delete health;
	delete mood;
	delete is_ill;
	delete hunger;
	id = 0;
	name = 0;
	health = 0;
	mood = 0;
	is_ill = 0;
	hunger = 0;
}

int main() {
	Pet tamagochi(false,100, 0, 1, 0);
	tamagochi.set_id(1);
	tamagochi.set_name("Tamik");

	//tamagochi.get_sick();

	return 0;
}