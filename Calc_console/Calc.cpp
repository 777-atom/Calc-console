// librery
#include <iostream>

// making data entry easier
using namespace std;

// function start
int main()
{
	// Understands Russian
	setlocale(LC_ALL, "ru-RU");
	// Understands fractional value
	double x = 0;
	double y = 0;
	// Understands string
	char opt;
	// In
	cout << "��������(+, -, /, *)" << endl;
	// Out
	cin >> opt;
	cout << "������� ���������� ����� �������: " << endl;
	cin >> x >> y;
	// Execution of the switch statement
	switch (opt)
	{
    // The case statement
	case '+':
		cout << "����� �����: " << x + y;
		break;
	case '-':
		cout << "�������� �����: " << x - y;
		break;
	case '*':
		cout << "��������� �����: " << x * y;
		break;
	case '/':
		if (x > 0) {
			cout << "������� �����: " << x / y;
		}
		else {
			cout << "������. �� ���� ������ ������." << endl;
		}
		break;
	// defaul 
	default:
		break;
	}
	
}