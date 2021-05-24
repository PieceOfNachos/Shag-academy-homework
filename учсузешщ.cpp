#include <iostream>
using namespace std;

class quest {
public:
	quest(int stage);
	void set_stage(int x) { x = this->stage; }
	int get_stage() { return stage; }
private:
	int stage;
};
quest::quest(int stage) :
	stage(stage) 
{}

class NPC{
public:
	quest scenario;
	NPC(int hp);
	int get_hp() { return hp; }
	void check_stage() { if (scenario.get_stage() == 10) { cout << "The END" << endl; } }
	void next_sage() { scenario.set_stage(get_stage() + 1); }
private:
	int hp;
};
NPC::NPC(int hp) :
	hp(hp)
{}
void start() {
	quest starting(0);
	NPC old(100);
	while (true) {
		old.check_stage();
		old.next_sage();
	}
}
int main() {
	void start();

	int a;
	cin >> a; //0
	try {
		if (a == 0) throw - 1;
		else if (a == 8) throw string("favorite number");
		cout << "a != 0" << endl;
	}
	catch (int) {
		cout << "a == 0, ERROR" << endl;
		return -1;
	}
	catch (string) {
		cout << "a == 8, it's my favorite number" << endl;
	}
}