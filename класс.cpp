#include <iostream>
#include <string>
#include "Class.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string answer;
    int value = 1;

    cout << "Вы хотите указать начальное значение счётчика? Введите yes или not: ";
    cin >> answer;

    if (answer == "yes") {
        cout << "Введите начальное значение счётчика: ";
        cin >> value;
    }
     
    
    Counter counter(value);

    char command;
    int n(1);
    while (n == 1) {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            n = 1;
            break;
        case '-':
            counter.decrement();
            n = 1;
            break;
        case '=':
            cout << counter.getValue() << endl;
            n = 1;
            break;
        case 'x':
            cout << "До свидания!" << endl;
            n = 0;
            break;
        default:
            cout << "Неизвестная команда! Попробуйте снова." << endl;
        }
        

    }
}