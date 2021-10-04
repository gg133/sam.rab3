
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float number1;
	float number2;
	float number3;
	cout << "введите сначало 1-е число, потом 2-е\n";
	cin >> number1 >> number2;
	cout << "Введите знак операции\n";
	char operation;
	cin >> operation;
	if (operation == '+') {
		number3 = number1+ number2;
		cout << "Результат: " << number1 << " + " << number2 << " = " << number3;
	}
	else if (operation == '-') {
		number3 = number1 - number2;
		cout << "Результат: " << number1 << " - " << number2 << " = " << number3;
	}
	else if (operation == '*') {
		number3 = number1 * number2;
		cout << "Результат: " << number1 << " * " << number2 << " = " << number3;
	}
	else if (operation == '/') {
		if (number2 == 0)
		{
			cout << "На ноль делить нельзя)\n";
		}
		else {
			number3 = number1 / number2;
			cout << "Результат: " << number1 << " / " << number2 << " = " << number3;
		}
	}
	else if (operation == '%') {
		number3 = (int)number1 % (int)number2;
		cout <<"Результат: "<<number1<<" % " << number2 << " = " << number3;
	}
	else {
		cout << "вы ввели неверный знак операции\n";
	}
	int _;
	cin >> _;
	return 0;
}

