#include<iostream>
#include<ctime>
using namespace std;
int player_health = 100;
int npc_health = 100;
void attack(int npc_health, int player_health);
void query(int& spell);
void spell_query(int& spell);
void heal_spell(int player_health);
//void defence_spell();
//void attack_spell();
int main() {
	int spell;
	int attack_npc;
	while (player_health > 0 || npc_health > 0) {
		query(spell);
		spell_query(spell);
		npc_damage(attack_npc, player_health);
	}
	return 0;
}
void attack(int npc_health, int player_health) {
	srand(time(0));
	npc_health -= rand() % 20 + 1;
}
void query(int& spell) {
	cout << "What do you want to use?" << endl;
	cout << "Heal spell - 1" << endl;
	cout << "defence spell - 2" << endl;
	cout << "attack spell - 3" << endl;
	cin >> spell;
}
void spell_query(int& spell) {
	switch (spell) {
	case 1:
		heal_spell(player_health);
		break;
	case 2:
		//defence_spell();
		break;
	case 3:
		//attack_spell();
		break;
	}
}
void heal_spell(int player_health) {
	srand(time(0));
	player_health += rand() % 20 + 1;
	if (player_health > 100) {
		player_health = 100;
	}
}
void npc_damage(int& attack_npc, int& npc_health) {
	srand(time(0));
	attack_npc = rand() % 20 + 1;
	player_health - attack_npc;
}
//void defence() {

//}