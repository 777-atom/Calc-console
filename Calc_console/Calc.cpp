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
	cout << "Операция(+, -, /, *)" << endl;
	// Out
	cin >> opt;
	cout << "Введите переменные через запятую: " << endl;
	cin >> x >> y;
	// Execution of the switch statement
	switch (opt)
	{
    // The case statement
	case '+':
		cout << "Сумма равна: " << x + y;
		break;
	case '-':
		cout << "Разность равна: " << x - y;
		break;
	case '*':
		cout << "Умножение равно: " << x * y;
		break;
	case '/':
		if (x > 0) {
			cout << "Деление равно: " << x / y;
		}
		else {
			cout << "Ошибка. На ноль делить нельзя." << endl;
		}
		break;
	// defaul 
	default:
		break;
	}
	
}