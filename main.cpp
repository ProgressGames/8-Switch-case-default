#include <iostream>
using namespace std;

int main() {
	int day = 1;

	setlocale(LC_ALL, "RUS");

	switch (day) {
	case 1:
		cout << "�����������";
		break;
	case 2:
		cout << "�������";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�������";
		break;
	case 5:
		cout << "�������";
		break;
	default:
		cout << "�������� ����!";
	}

	return 0;
}