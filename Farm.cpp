#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;

int ingame_balance = 0;
void farm(int& agronomy);
void collection(int& agronomy, bool& play);
void welcome_menu(int& menu, int& ingame_balance, bool& play);

int main() {
	int menu;//переменная выбора действия при входе в игру
	//int truffle;
	bool temp;
	bool* p_temp = &temp;
	int agronomy;//переменная для выбора культуры
	bool play = true;
	int start_time = clock();
	
	welcome_menu(menu, ingame_balance, play);
	int end_time = clock();
	int time1 = end_time - start_time;
	while (play == true) {
		farm(agronomy);
		season(p_temp,end_time,start_time,time1,agronomy);
		start_time = clock();
		collection(agronomy, play);
	}
	
	
}
void farm(int& agronomy, bool* p_temp) {//функция выбора культуры для сбора
	cout << "What you wanna take?" << endl;
	cout << "1-Wheat" << endl;
	cout << "2-Barley" << endl;
	cout << "3-Cucumbers" << endl;
	cout << "4-Oranges" << endl;
	cout << "5-Mushrooms" << endl;
	cout << "6-Tomatoes" << endl;
	cout << "7-Watermelon" << endl;
	cout << "8-Apple" << endl;
	cin >> agronomy;
	*p_temp = false;

}
void season(bool* p_temp, int end_time, int start_time, int time1, int& agronomy) {
	season1(p_temp, end_time, start_time, time1, agronomy);
}
void winter(int& agronomy, bool* p_temp) {
	if (agronomy != 5 || agronomy != 4) {
		cout << "сейчас зима это мы не посадим" << endl;
		farm(agronomy, p_temp);
	}
}
void summer(int& agronomy, bool* p_temp) {
	if (agronomy != 5 || agronomy != 7 || agronomy != 8 || agronomy != 1) {
		cout << "сейчас лето это мы не посадим" << endl;
		farm(agronomy, p_temp);
	}
}
void autumn(int& agronomy, bool* p_temp) {
	if (agronomy != 5 || agronomy != 6 || agronomy != 3) {
		cout << "сейчас осень это мы не посадим" << endl;
		farm(agronomy, p_temp);
	}
}
void spring(int& agronomy, bool* p_temp) {
	if (agronomy != 5 || agronomy != 2 || agronomy != 6 || agronomy != 3) {
		cout << "сейчас весна это мы не посадим" << endl;
		farm(agronomy, p_temp);
	}
}
void season1(bool* p_temp, int end_time, int start_time, int time1, int& agronomy) {
	if (*p_temp == false) {
		end_time = clock();
		time1 = end_time - start_time;
		if (time1 > 100 && time1 < 500) {
			winter(agronomy, p_temp);

		}
		else if (time1 > 500 && time1 < 1000) {
			autumn(agronomy, p_temp);
		}
		else if (time1 > 1000 && time1 < 1500) {
			summer(agronomy, p_temp);
		}
		else if (time1 > 1500 && time1 < 2000) {
			spring(agronomy, p_temp);
		}
	}
}



void welcome_menu(int& menu, int& ingame_balance, bool& play){//функция главного меню
	cout << "Welcome to 'Happy farm'!" << endl;
	cout << "Would you enter?" << endl;
	cout << "1-Yes" << endl;
	cout << "2-No" << endl;
	cin >> menu;
	if (menu == 1) {
		cout << "Your balance: " << ingame_balance << endl;
	}
	else if (menu == 2) {
		cout << "Bye bye.:(" << endl;
		play = false;
	}
}



void collection(int& agronomy, bool& play) {//функция сбора культур
	switch (agronomy) {
	case 1://Пщеница
		Sleep(30000);
		ingame_balance += 100;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 100 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 2://Ячмень
		Sleep(40000);
		ingame_balance += 150;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 150 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 3://Огурцы
		Sleep(80000);
		ingame_balance += 300;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 300 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 4://Апельсины
		Sleep(120000);
		ingame_balance += 400;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 400 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 5://Грибы
		Sleep(240000);
		ingame_balance += 500;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 400 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 6://Томаты
		Sleep(105000);
		ingame_balance += 350;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 350 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 7://Арбуз
		Sleep(300000);
		ingame_balance += 700;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 700 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	case 8://Яблоки
		Sleep(60000);
		ingame_balance += 200;
		cout << "You have reaped the harvest!" << endl;
		cout << "Received 200 coins." << endl;
		cout << "Your balance: " << ingame_balance << endl;
		break;
	default:
		cout << "Never gonna give you up.Never gonna let you down. Ahaha you are rickrolled!" << endl;
		play = false;
		break;
	}
}
/*
Моя задача была реализовать рост продуктов в 
определенный период времени и само время


*/