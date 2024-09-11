#include <iostream>

using namespace std;

int main() {
	int day = 1; 

	setlocale(LC_ALL, "RUS");

	switch (day) { // Это оператор множественного выбора | This is a multiple choice operator
	case 1: // 1 означате цифру в переменной day, если её изменить в переменной на 2 то высветиться Вторник и так далее | 1 means a digit in the day variable, if you change it in the variable to 2, then Tuesday will appear and so on
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник;
		break;
	case 3:
		cout << "Среда";
		break;
	case 4:
		cout << "Четверг";
		break;
	case 5:
		cout << "Пятница";
		break;
	default:
		cout << "Неверный день!";
	}

	return 0;
}
