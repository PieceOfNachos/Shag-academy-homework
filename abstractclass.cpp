#include <iostream>
using namespace std;

class gifts {
public:
	virtual void add() = 0;
	virtual int show() = 0;
protected:
	int gifts_counter = 0;
};

class stars :public gifts {
public:
	void add();
	int show();
private:
	int stars_counter = 0;
};

void stars::add() {
	stars_counter++;
}

int stars::show() {
	return this->stars_counter;
}

class trophies :public gifts {
public:
	void add();
	int show();
private:
	int trophies_counter = 0;
};

void trophies::add() {
	trophies_counter += 10;
}

int trophies::show() {
	return this->trophies_counter;
}

class user {
public:
	void reward();
	int checker();
	stars star;
	trophies trophie;
private:
	int points = 0;
};

void user::reward() {
	if (points == 100) {
		points = 0;
	}
	this->points++;
}

int user::checker() {
	return this->points;
}
void start() {
	user Vova;
	bool menu = true;
	int choice;

	cout << "Welcome to 'very pretentious name'" << endl;
	while (menu) {

		cout << "1-Spend a minute on social media" << endl;
		cout << "2-Show rewards" << endl;
		cout << "3-Exit the app" << endl;
		cin >> choice;

		if (choice == 1) {
			if (Vova.checker() == 50) {
				cout << "You have earned a trophies" << endl;
				Vova.trophie.add();
			}
			else if (Vova.checker() == 100) {
				cout << "You have earned a star" << endl;
				Vova.star.add();
			}
			Vova.reward();
			cout << "Yours points:" << Vova.checker() << endl;
		}

		else if (choice == 2) {
			cout << "Yours stars:" << Vova.star.show() << endl;
			cout << "Yours trophies:" << Vova.trophie.show() << endl;
		}
		else if (choice == 3) {
			cout << "Bye bye,see you next time! :)" << endl;
			menu = false;
		}
		else { cout << "Oops,something going wrong" << endl; }
	}
}
int main() {
	start();
}
