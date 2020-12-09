#include <iostream>

/*Ситуация: Герой встречается с npc-персонажем. Между ними начинается диалог. Используя
конструкцию switch - case дайте игроку возможность выбора между несколькими возможными
фразами и обозначьте в каждому случае реакцию npc*/

/* Дополнительное задание: подумайте, какие величины в игре могут влиять на
диалог (слава героя, его харизма, пройденный главный сюжет, членство в гильдиях и т.д.)
Дополните диалог, добавив различные варианты для различных значений выбранных величин*/

int main() {
	int charisma, trueOrFakeNews;
	int behavior;
	bool badPast;
	int ageInJail = 0;
	int beg = 0;
	int relation; //отношение Олдрика к герою
	int answ; //ответ Героя
	setlocale(0, "ru");
	std::cout << "Приветствую, Странник" << std::endl;

	std::cout << std::endl << "Choise your abbilities:\nCharisma: " << std::endl;
	std::cin >> charisma;
	std::cout << std::endl << "Behavior: " << std::endl;
	std::cin >> behavior;
	std::cout << std::endl << "Your Past: " << std::endl;
	std::cin >> badPast;
	std::cout << std::endl << "Relation: " << std::endl;
	std::cin >> relation;



	std::cout << std::endl << "1.- Давай торговать!" << std::endl;
	std::cout << "2.- Я вырезал твою родную деревню!" << std::endl;
	std::cout << "3.- Слухи!" << std::endl;
	std::cout << "4.- Нет, ничего не надо, до свидания!" << std::endl;


	std::cout << std::endl << "Выберите вариант ответа:" << std::endl;
	std::cin >> answ;
	switch (answ) {
	case 1:
		if (charisma > 5 && behavior > 5 && badPast != true && relation > 5) {
			std::cout << "I will trade with you knight, if you need smth i can give you some discount" << std::endl;
			relation++;
		}
		else if (charisma < 0 && behavior < 0 && badPast == true && relation < 0) {
			std::cout << "i won't talk with you, go away!" << std::endl;
			relation--;
		}
		else {
			std::cout << "I will trade with you!" << std::endl;
		}
		break;

	case 2:
		if (charisma > 5 && behavior > 5 && badPast != true && relation > 5) {
			std::cout << "i won't talk with you, HEY POLICE THERE IS MAN WHO IS GAY" << std::endl;
			relation--;
			ageInJail = ageInJail + 1;
		}
		else if (charisma < 0 && behavior < 0 && badPast == true && relation < 0) {
			std::cout << "i will kill you!" << std::endl;
			relation--;
		}
		else {
			std::cout << "i won't talk with you, i wanna to kill you but i wont!" << std::endl;
			relation--;
		}
		break;
	case 3:
		if (charisma > 5 && behavior > 5 && badPast != true && relation > 5) {
			std::cout << "I understood you, thank for this news!" << std::endl;
			relation++;

		}
		else if (charisma < 0 && behavior < 0 && badPast == true && relation < 0) {
			std::cout << "I dont trust you!" << std::endl;
			relation--;
		}
		else {
			std::cin >> trueOrFakeNews;
			std::cout << "Thank you for advise, but let me check that info!" << std::endl;
			if (trueOrFakeNews == 1) {
				relation++;
			}
			else {
				relation--;
			}


		}
		break;
	default:
		std::cout << "Ok, we will meet each other in a future" << std::endl;
	}
	if (ageInJail != 0) {
		std::cin >> beg;
		if (beg > 0) {
			std::cout << "You can be free" << std::endl;
		}
	}

	/*Здесь Ваш код :))*/

	return 0;
}