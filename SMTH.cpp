#include <iostream>
#include<string>
#include<windows.h>
int main() {
	std::string name;
	std::string check;
	std::string PCskin;
	std::string answ;
	int skin;
	bool mainMenu = true;
	while (mainMenu) {
		std::cout << "Continue?" << std::endl;
		std::cout << "New Game" << std::endl;
		std::cout << "Load skin" << std::endl;
		std::cout << "Exit" << std::endl;
		//std::cin.getline(answ, 256);
		std::getline(std::cin, answ);
		if (answ == "New Game") {
			std::cout << "New name is: " << std::endl;
			std::getline(std::cin, name);
			std::cout << name << std::endl;
			mainMenu = false;
		}
		else if (answ == "Load skin") {
			std::cout << "Choise your champion: " << std::endl;
			std::cout << "To being warrior write 1" << std::endl;
			std::cout << "To being wizzard write 2" << std::endl;
			std::cout << "To being Nigga? write 3" << std::endl;
			std::cin >> skin;
			switch (skin) {
			case 1:
				std::cout << "You are warrior!" << std::endl;
				PCskin = "Warrior";
				std::cout << "Your class is " << PCskin << std::endl;
				mainMenu = false;
				break;
				
			case 2:
				std::cout << "You are wizzard!" << std::endl;
				PCskin = "wizzard!";
				std::cout << "Your class is " << PCskin << std::endl;
				mainMenu = false;
				break;
				
			default:
				std::cout << "You are NIGGA BRO!" << std::endl;
				PCskin = "NIGGER";
				std::cout << "Your class is " << PCskin << std::endl;
				mainMenu = false;
				break;
				
			}
			
		}
		else if (answ == "Exit") {
			std::cout << "Are you sure?" << PCskin << std::endl;
			//std::cin.getline(check, 256);
			std::getline(std::cin, check);
			if (check == "Yes" || check == "yes") {
				mainMenu = false;
			}
			else {
				std::cout <<"OK"<< std::endl;
			}
		}
		else {
			std::cout << "You decide to continue" << std::endl;
		}
		



	}
	return 0;
}