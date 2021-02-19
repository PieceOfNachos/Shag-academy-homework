#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "ru");
	int shift[5];
	int temp;
	int step;//сдвиг
	cout << "Введите числа в массив: " << endl;//ввод элементов массива
	for (int i = 0; i < 5; i++) {
		cin >> shift[i];
	}//сам ввод
	for (int i = 0; i < 5; i++) {//вывод на экран массива
		cout << shift[i] << ", ";
	}
	cout << endl;

	cout << "Какой сдвиг в массиве нужно сделать?" << endl;
	cin >> step;
	for (int i = 0; i < step; ++i)//сам сдвиг
	{
		temp = shift[0];
		for (int k = 0; k < 5 - 1; ++k) {
			shift[k] = shift[k + 1];
			shift[k + 1] = temp;
		}
	}
	for (int i = 0; i < 5; i++) {//вывод массива после сдвига
		cout << shift[i] << ", ";
	}
	cout << endl;
	return 0;
}