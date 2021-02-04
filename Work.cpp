#include <iostream>
using namespace std;
int task = 0;
const int allAmountOfTasks = 5;
void mainMenu() {
	cout << "Решить новую задачу - 1" << endl;
	cout << "Посмотреть прошлые результаты - 2" << endl;
	cout << "Перерешать задачу - 3" << endl;
	cout << "Общаться с Тамагочи - 4" << endl;
	cout << "Выйти из игры - 5" << endl;
}
void firstTask() {

}

void secondTask(){}
void thirdTask(){}
void forthTask(){}
void fifthTask(){}
void startNewTask(int task) {
	cin >> task;
	switch (task) {
	case 1:
		firstTask();
		break;
	case 2:
		secondTask();
		break;
	case 3:
		thirdTask();
		break;
	case 4:
		forthTask();
		break;
	default:
		fifthTask();
		break;
	}
}
void lastResults(int* p_correct, int*  p_incorrect){
	cout << "За тест номер " << task << "\nПравильных: " << *p_correct << "\nНеправильных: " << *p_incorrect << endl;
}
void rewriteLastTask(){

}
void talkWithTamagochi(){}
void checkActivity(int chose, bool& exitChose, int* p_correct, int* p_incorrect) {
	switch (chose) {
	case 1:
		startNewTask(task);
		break;
	case 2:
		lastResults(p_correct,p_incorrect);
		break;
	case 3:
		//rewriteLastTask();
		break;
	case 4:
		//talkWithTamagochi();
	default:
		exitChose = false;
		break;
	}
}

int getMood(int*p_correct, int* p_incorrect, int lastSeen) {
	return 

}

int main() {
	setlocale(0, "ru");
	int tamgochi;
	int mood;
	int chose;
	bool exit = true;
	int correct;
	int* p_correct = &correct;
	int incorrect;
	int* p_incorrect = &incorrect;
	bool& exitChose = exit;
	int listOfBadWorks;
	int mistakes;
	int rewritedTasks;
	
	
	int startTime;
	int lastSeen;
	do {
		mainMenu();
		cin >> chose;
		checkActivity(chose, exitChose, p_correct, p_incorrect);
	} while(exit);


	return 0;
}