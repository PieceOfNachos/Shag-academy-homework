#include <iostream>
#include <ctime>
using namespace std;
void rightSlotWithAmmo(int& countSlotWithAmmo) {
	srand(time(0));
	countSlotWithAmmo = rand() % 6 + 1;

}
void freeSlotChecker(int startNumber) {
	if (startNumber > 0 && startNumber < 7) {
		cout << "You chose: " << startNumber << endl;
	}
	else {
		cout << "we dont have this slot" << endl;
	}
}
void mainMenu() {
	cout << "To start game press 1" << endl;
	cout << "To exit press 2" << endl;
}
void mainMenuChooseChecker(int mainMenuChoose, bool& liveChange) {
	int i = 0;
	while(i>0){
		switch (mainMenuChoose) {
		case 1:
			cout << "You decided to start game" << endl;
			i++;
			break;
		case 2:
			cout << "You decided to exit" << endl;
			liveChange = false;
			i++;
			break;
		default:
			cout << "write 1 or 2" << endl;
		}
	}
}
int main() {
	int boldness;
	int& claimBoldness = boldness;
	int slotWithAmmo;
	int& countSlotWithAmmo = slotWithAmmo;
	int startNumber;
	int mainMenuChoose;
	bool live = true;
	bool& liveChange = live;
	while (live) {
		mainMenu();
		cin >> mainMenuChoose;
		rightSlotWithAmmo(countSlotWithAmmo);
		mainMenuChooseChecker(mainMenuChoose, liveChange);
		cout << "Choose number of slot in gun to start with this number" << endl;
	
		cin >> startNumber;
		freeSlotChecker(startNumber);

	}
	
	cout << slotWithAmmo << endl;
	return 0;
}