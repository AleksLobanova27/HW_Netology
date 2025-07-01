#include <iostream>
#include <string>
using namespace std;

class Figure {
protected:
	int _numSides;

public:
	Figure(): _numSides(0){}
	int getNumSides(){
		return _numSides;
	}
};

class Triangle : public Figure {
public:
	Triangle() { _numSides = 3; }
};

class Quadriateral : public Figure {
public:
	Quadriateral() { _numSides = 4; }
};

int main() {
	setlocale(LC_ALL, "Russian");
	Figure figure1;
	Triangle triangle1;
	Quadriateral quadriateral1;
	cout << "Количество:\nФигура: " << figure1.getNumSides() << "\nТреугольник: " << triangle1.getNumSides() << "\nЧетырёхугольник: " << quadriateral1.getNumSides() << endl;
}