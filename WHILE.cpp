#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "Ru");
	bool trigger = true;
	int password;
	string storage = "empty";
	bool menuMain = true;
	bool auth = true;
	int check;
	int load;
	int character;
	cout << "If you wanna enter the game press 2" << endl;
	while (auth != false) {
		cin >> password;
		if (password == 2) {
			cout << "Welcome!" << endl;
			auth = false;
		}
		else {
			cout << "I'm sorry, but you wrote wrong number" << endl;

		}
	}

	int answ;
	while (menuMain){
		cout << "To continue press 1!\nTo start a new game press 2!\nTo load save press 3!\nTo exit press 4" << endl;
		cin >> answ;
		switch (answ)
		{
		case 1:
			cout << "Continue" << endl;
			break;
		case 2:
			cout << "вы точно хотите начать все заново?" << endl;
			
			cout << "Yes - 1" << endl;
			cout << "No - 2" << endl;
			cin >> check;
			if (check == 1) {
				cout << "You decided to start new game!\n please wait!" << endl;
				Sleep(5000);
				storage = "Loaded";
					cout << "Storage is " << storage << endl;
				menuMain = false;
			}
			else if (check == 2) {
				cout << "You refuse suggestion to start a new game!" << endl;
			}
			else {
				cout << "выход из игры без сохранения.Пожалуйста подождите!" << endl;
				cout << "Storage is " << storage << endl;
				menuMain = false;
			}
			break;
		case 3:
			cout << "Choose Load where you want to start!" << endl;
			cout << "Load 1\nLoad 2\nLoad 3\nLoad 4\n" << endl;
			cout << "Load 1 and 2 are only with human rase character selection" << endl;
			cin >> load;
			if (load == 1 || load == 2) {
				cout << "Choose one of this skins!"<<endl;
					cout << "To choose Wizzard press 1\nTo choose Warrior press 2" << endl;
				cin >> character;
				if (character == 1) {
					cout << "You chose Wizzard"<<endl;
					cout << "Load is on way, wait 5 sec" << endl;
					Sleep(5000);
					cout << "You loaded successfully" << endl;
					menuMain = false;

				}else{
					cout << "You chose Warrior" << endl;
					cout << "Load is on way, wait 5 sec" << endl;
					Sleep(5000);
					cout << "You loaded successfully" << endl;
					menuMain = false;
				}

			}
			else if (load == 3 || load == 4) {
				cout << "Choose one of this skins!";
					cout << "To choose Org press 3\nTo choose Dinasour press 4" << endl;
				cin >> character;
				if (character == 3) {
					cout << "You chose Org" << endl;
					cout << "Load is on way, wait 5 sec" << endl;
					Sleep(5000);
					cout << "You loaded successfully" << endl;
						menuMain = false;

				}
				else {
					cout << "You chose Dinasour" << endl;
					cout << "Load is on way, wait 5 sec" << endl;
					Sleep(5000);
					cout << "You loaded successfully" << endl;
					menuMain = false;
				}

			}
			break;
		case 4:
			cout << "вы собираетесь выйти из игры без сохранения!" << endl;
			Sleep(2000);
			cout << storage << endl;
			menuMain = false;
			break;


		default:
			cout << "Smth went wrong:), try again)))" << endl;
			break;
		}


	}

	return 0;
}
