#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	/*string login1 = "sasha228";
	string login2 = "gachiMuchi";
	string password = "123", password2 = "qwerty";
	cout << "Login: ";
	cin >> login1;
	cout << "Password: ";
	cin >> password;
	if (password == "123" && login1 == "sasha228") {
		cout << "Hello sasha" << endl;
	}
	else if (password == "qwerty" && login1 == "gachiMuchi") {
		cout << "Hello gachiMuchi" << endl;
	}
	
	bool again = true;
	int counter = 0;
	while (again) {
		counter++;
		if (counter == 5) continue;
		else if (counter == 10) break;
		else cout << counter << endl;
	}*/
	setlocale(0, "Ru");
	string hero = "Aladin";
	string chose;
	bool deathOfAladin = true;
	while (deathOfAladin) {
		cout << "You are bum" << endl;
		cout << "What you will do?\n 1) Stay bum\n2) Try to find magic lump!" << endl;
		getline(cin, chose);
		if (chose == "Stay" || chose == "stay") {
			goto goto_death;
			deathOfAladin = false;
		}
		else if (chose == "Try" || chose == "try") {
			cout << "You found a magic lump!" << endl;
			cout << "What you will do?\n 1) shiver lump\n2) Throw lump" << endl;
			getline(cin, chose);
			if (chose == "shiver" || chose == "Shiver") {
				cout << "Jin: You can ask me what you want" << endl;
				getline(cin, chose);
				if (chose == "money") {
					cout<<
				}
			}
			else if (chose == "Throw" || chose == "throw") {
				cout << "You throwed lump and came to city back" << endl;
				cout << "What you will do?\n 1) try to have tuition\n2) try to make a business \n3) Work hard to somebody" << endl;
				getline(cin, chose);
				if (chose == "tuition" || chose == "Tuition") {
					cout << "You chose tuition and after 3 years you know programming, What you will do?\nExplore SpaceX\nMake a app where you need to click on the screen to earn virtual money" << endl;
					getline(cin, chose);
					if (chose == "SpaceX" || chose == "spacex") {
						cout << "You changed your name to Elon and you are a billionare" << endl;
						deathOfAladin = false;

					}
					else {
						goto goto_death;
						deathOfAladin = false;

					}

				}
			}
			else if (chose == "business" || chose == "Business") {
				cout << "You started youre business and lived a good live" << endl;
				deathOfAladin = false;
			}
			else {
				cout << "after 2 years of working hard\n You decide to be fired from work and also" << endl;
				goto goto_death;
				deathOfAladin = false;
			}
		}
	}
			goto_death:
				cout << "you died by famined" << endl;

	return 0;
}
