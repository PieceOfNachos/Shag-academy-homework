

#include <iostream>
#include <time.h>

using namespace std;
void chest_checker(int choose_chest, int trying, int &a1, int choose_number, int right_position_link, int win_or_lose ,int& a2, int& a3, int& trying_link) {
	switch (choose_chest)
	{
	case 1:
		while (trying_link < a1 && trying_link < a2 && trying_link < a3 || win_or_lose == true) {
			cin >> choose_number;
			if (choose_number == right_position_link) {
				cout << "You won! Congarts" << endl;
				win_or_lose = false;
			}
			else if (trying_link == a1) {
				win_or_lose = false;
			}
			else if (trying_link == a2) {
				win_or_lose = false;
			}
			else if (trying_link == a3) {
				win_or_lose = false;
			}
			else {
				trying_link++;
			}
		}
		break;
	case 2:
		while (trying_link < a2 && trying_link < a2 || win_or_lose == true) {
			cin >> choose_number;
			if (choose_number == right_position_link) {
				cout << "You won! Congarts" << endl;
				win_or_lose = false;
			}
			else if (trying_link == a1) {
				win_or_lose = false;
			}
			else if (trying_link == a2) {
				win_or_lose = false;
			}
			else {
				trying_link++;
			}
		}
		break;
	case 3:
		while (trying_link < a1 || win_or_lose == true) {
			cin >> choose_number;
			if (choose_number == right_position_link) {
				cout << "You won! Congarts" << endl;
				win_or_lose = false;
			}
			else if (trying_link == a1) {
				win_or_lose = false;
			}
			else {
				trying_link++;
			}
		}
		break;
	default:
		cout << "DJ KHALED" << endl;
		break;
	}
}
void random(int& a1, int& a2, int& a3, int choose_chest) {
	srand(time(0));
	for (int i = 0; i < 4; i++) {
		if (choose_chest == 1) {
			a1 = rand() % 10 + 1;
			a2 = rand() % 10 + 1;
			a3 = rand() % 10 + 1;
		}
		else if (choose_chest == 2) {
			a1 = rand() % 10 + 1;
			a2 = rand() % 10 + 1;
		}
		else {
			a1 = rand() % 10 + 1;
		}
		//return a1, a2, a3;
	}
}
	void random_right_position(int& right_position_link, int choose_chest) {
		srand(time(0));
		if (choose_chest == 1) {
			right_position_link = rand() % 100 + 1;
		}
		else if (choose_chest == 2) {
			right_position_link = rand() % 30 + 1;
		}
		else if (choose_chest == 3) {
			right_position_link = rand() % 10 + 1;
		}
	}

int main()
{
	int right_position;
	int& right_position_link = right_position;
	int durability_for_first_master_key;
	int durability_for_second_master_key;
	int durability_for_third_master_key;
	int& a1 = durability_for_first_master_key;
	int& a2 = durability_for_second_master_key;
	int& a3 = durability_for_third_master_key;
	bool win_or_lose = true;
	int choose_chest;
	int trying = 0;
	int& trying_link = trying;
	int choose_number = 0;
	cin >> choose_chest;
	random_right_position(right_position_link, choose_chest);
	random(a1, a2, a3, choose_chest);

	while (win_or_lose) {
		
		chest_checker(choose_chest,trying,durability_for_first_master_key,choose_number,right_position_link,win_or_lose,durability_for_second_master_key,durability_for_third_master_key,trying_link);

		
	}



}

