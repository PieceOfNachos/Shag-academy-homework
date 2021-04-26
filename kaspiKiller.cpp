#include <iostream>
#include <ctime>
using namespace std;

class Player {
public:
	Player(string name);
	virtual void attack();
	virtual void get_damage();
private:
	string name;
};

Player::Player(string name) :
	name(name)
{
}

class Dino :public Player
{
public:
	Dino();
	~Dino();
	void set_flag_1(bool x);
	void result();
	int attack(int base_damage);
	void get_damage();
	int get_hp();
private:
	int base_damage = 5;
	int hp = 100;
	bool flag;
	string* invent;
	int item_counter;
};

Dino::Dino()
{
	item_counter = 3;
	invent = new string[item_counter];
	invent[0] = "Вишня";
	invent[1] = "Картошка";
	invent[2] = "Леденец";
	
}

Dino::~Dino()
{
	delete[] invent;
	invent = 0;
}
class Corona : Player
{
public:
	Corona();
	~Corona();
	void set_flag_2(bool x);
	void result();
	int attack(int base_damage);
	void get_damage();
	int get_hp();
private:
	int hp_corona = 50;
	int base_damage = 10;
	bool flag;
	string* invent;
	int item_counter;
};

Corona::Corona()
{
	item_counter = 3;
	invent = new string[item_counter];
	invent[0] = "Вишня";
	invent[1] = "Картошка";
	invent[2] = "Леденец";
}

Corona::~Corona()
{
	delete[] invent;
	invent = 0;
}
void Dino::set_flag_1(bool x) {
	x = this->flag;
}
void Corona::set_flag_2(bool x) {
	x = this->flag;
}
int Dino::get_hp() {
	return this->hp;
}
int Corona::get_hp() {
	return this->hp_corona;
}
void set_charcter(Dino flagg, Corona flak) {
	cout << "За кого будите Играть?" << endl;
	cout << "1 - Динозавр" << endl;
	cout << "2 - Коронавирус" << endl;
	int chose;
	cin >> chose;
	if(chose == 1){
		flagg.set_flag_1(true);
	}
	else {
		flak.set_flag_2(true);
	}
}
int Dino::attack( int base_damage) {
	srand(time(0));
	int random_effect = rand() % base_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
	int damage = this->base_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового
	return damage; //возвращаем урон во внешнюю программу
}
int Corona::attack(int base_damage) {
	srand(time(0));
	int random_effect = rand() % base_damage; //генерируем случайную величину в пределах от нуля до базового урона - 1
	int damage = this->base_damage - random_effect; //меняем урон: теперь он варьируется от нуля до изначального базового
	return damage; //возвращаем урон во внешнюю программу
}
string greetings() {
	cout << "Введите свое имя:" << endl;
	cin >> name1;
	cout << "Здраствуйте " <<name1<< endl;
	return name1;
}
void Dino::get_damage() {
	get_hp() = get_hp() - attack();

}
void Corona::get_damage() {
	attack.get_hp() = attack.get_hp() - attack2.attack();

}
void game(Dino health, Corona health1) {
	while (true) {
		if (health.get_hp() < 0 && health1.get_hp() < 0) cout << "All die" << endl;
		else if (health.get_hp() > 0 && health1.get_hp() < 0) cout << "Dino win" << endl;
		else if (health1.get_hp() > 0 && health.get_hp() < 0) {
			cout << "Corona win" << endl;
			break;
		}
		cin.get();
		
		health.get_damage();
		health1.get_damage();
	}
}
string name1;
int main()
{
	Dino flagg;
	Corona flak;
	Dino health;
	Corona health1;
	greetings();
	Player loading(greetings());
	set_charcter(flagg, flak);
	game(health,health1);
}
