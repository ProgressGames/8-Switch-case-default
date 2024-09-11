#include <iostream>
using namespace std;

int main() {
	int day = 1;

	setlocale(LC_ALL, "RUS");

	switch (day) {
	case 1:
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник";
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