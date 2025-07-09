#include <iostream>
#include <string>
#include "Math.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");

	int a;
	int b;
	int numOper;
	cout << "Введите первое число : \n";
	cin >> a;
	cout << "Введите второе число : \n";
	cin >> b;
	cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) :\n";
	cin >> numOper;

	if (numOper == 1) { cout << a << " + " << b << " = " << MFunction::sum(a, b) << "\n"; }
	if (numOper == 2) { cout << a << " - " << b << " = " << MFunction::dif(a, b) << "\n"; }
	if (numOper == 3) { cout << a << " * " << b << " = " << MFunction::mul(a, b) << "\n"; }
	if (numOper == 4) { cout << a << " : " << b << " = " << MFunction::div(a, b) << "\n"; }
	if (numOper == 5) { cout << a << " в степени " << b << " = " << MFunction::deg(a, b) << "\n"; }
	
	return EXIT_SUCCESS;
}