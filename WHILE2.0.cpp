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
	int grap;
	string grapLevel;
	int exit;
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
	while (menuMain) {
		cout << "To continue press 1!\nTo start a new game press 2!\nTo load save press 3!\nTo go on settings press 4\nTo exit press 5" << endl;
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
				cout << "Choose one of this skins!" << endl;
				cout << "To choose Wizzard press 1\nTo choose Warrior press 2" << endl;
				cin >> character;
				if (character == 1) {
					cout << "You chose Wizzard" << endl;
					cout << "Load is on way, wait 5 sec" << endl;
					Sleep(5000);
					cout << "You loaded successfully" << endl;
					menuMain = false;

				}
				else {
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
			cout << "You chose settings" << endl;
			cout << "Choose what you want to change: " << endl;
			cout << "1 - Difficult level" << endl;
			cout << "2 - Graphics settings" << endl;
			cout << "3 - Captions output" << endl;
			cout << "To save and exit press 5" << endl;
			cin >> grap;
			if (grap == 1) {
				cout << "Impossible level - 1" << endl;
				cout << "Hard level - 2" << endl;
				cout << "Standart level - 3" << endl;
				cout << "Easy level - 4" << endl;
				cin >> grap;
				if (grap == 1) {
					cout << "You chose Impossible level" << endl;
					break;
				}
				else if (grap == 2) {
					cout << "You chose Hard level" << endl;
					break;
				}
				else if (grap == 3) {
					cout << "You chose Standart level" << endl;
					break;
				}
				else if (grap == 4) {
					cout << "You chose Easy level" << endl;
					break;
				}
				else {
					
					cout << "smth went wrong ops:0" << endl;
					break;
				}

			}
			else if (grap == 3) {
				cout << "English subtitles - 1" << endl;
				cout << "French subtitles - 2" << endl;
				cout << "Spanish subtitles - 3" << endl;
				cout << "Russian subtitles - 4" << endl;
				cin >> grap;
				if (grap == 1) {
					cout << "You chose English subtitles" << endl;
				}
				else if (grap == 2) {
					cout << "You chose French subtitles" << endl;
				}
				else if (grap == 4) {
					cout << "You chose Russian subtitles" << endl;
				}
				else if (grap == 3) {
					cout << "You chose Spanish subtitles" << endl;
				}
				else {
					cout << "smth went wrong ops:0" << endl;
				}

			}
			if (grap == 2) {
				cout << "Ultra + Raytraysing level - 1" << endl;
				cout << "Ultra - 2" << endl;
				cout << "High level - 3" << endl;
				cout << "Standart level - 4" << endl;
				cout << "Low level - 5" << endl;
				cin >> grap;
				if (grap == 1) {
					cout << "You chose Ultra + RTX" << endl;
						grapLevel = "Ultra + RTX";
					cout << "You're graphic level is " << grapLevel << endl;
					break;
				}
				else if (grap == 2) {
					cout << "You chose Ultra" << endl;
					grapLevel = "Ultra";
					cout << "You're graphic level is " << grapLevel << endl;
					break;
				}
				else if (grap == 3) {
					cout << "You chose High level" << endl;
					grapLevel = "high";
					cout << "You're graphic level is " << grapLevel << endl;
					break;
				}
				else if (grap == 4) {
					cout << "You chose Standart level" << endl;
					grapLevel = "Standart";
					cout << "You're graphic level is " << grapLevel << endl;
					break;
				}
				else if (grap == 5) {
					cout << "You chose low level" << endl;
					grapLevel = "Low";
					cout << "You're graphic level is " << grapLevel << endl;
					break;
				}
				else {
					cout << "smth went wrong ops:0" << endl;
					break;
				}


			}
			if (grap == 5) {
				cout << "Are you sure, that you wanna exit settings?" << endl;
				cout << "Yes or no" << endl;
				cin >> exit;
				if (exit == 1) {
					cout << "Please wait, we're in process..." << endl;
					Sleep(3000);
					cout << "All done, settings are saved" << endl;
					menuMain = false;
					break;

				}
				else {
					cout << "You refused" << endl;
					break;
				}
			}


		case 5:
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
