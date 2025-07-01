#include <iostream>
#include <string>

using namespace std;

//фигура
class Figure {
protected:
	int _numSides;
	string _name;
	Figure(int sides, const string& name) : _numSides(sides), _name(name) {}

public:
	int getNumSides() const {return _numSides;}
	string getName() const { return _name;}

	virtual void printInfo() const = 0;
	virtual ~Figure() = default;
};


//треугольник
class Triangle : public Figure {
protected:
	double _a, _b, _c; //стороны
	double _A, _B, _C; //углы

public:
	Triangle(double a, double b, double c, double A, double B, double C) 
		: Figure(3, "Треугольник"),_a(a),_b(b),_c(c),_A(A),_B(B),_C(C){}
	void printInfo() const override{
		cout << _name << ":\n";
		cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c << "\n";
		cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C <<"\n" << endl;
	}
};

//Прямоугольный треугольник
class RightTriangle : public Triangle {
public:
	RightTriangle(double a, double b, double c, double A, double B) : Triangle(a, b, c, A, B, 90) {
		_name = "Прямоугольный треугольник";
	}
};

//Равнобедренный треугольник
class IsoTreangle : public Triangle {
public:
	IsoTreangle(double a, double b, double A, double B) : Triangle(a, b, a, A, B, A) {
		_name = "Равнобедренный треугольник";
	}
};

//Равносторонний треугольник
class EquTriangle : public Triangle {
public:
	EquTriangle(double a) : Triangle(a, a, a, 60, 60, 60) {
		_name = "Равносторонний треугольник";
	}
};


//Четырёхугольник
class Quadriateral : public Figure {
protected: 
	double _a, _b, _c, _d; //стороны
	double _A, _B, _C, _D; //углы

public:
	Quadriateral(double a, double b, double c, double d, double A, double B, double C, double D) 
		: Figure(4, "Четырёхугольник"), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D){}

	void printInfo() const override {
		cout << _name << ":\n";
		cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c << " d = " << _d << "\n";
		cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C << " D = " << _D << "\n" << endl;
	}
};

//Прямоугольник
class Rectangle : public Quadriateral {
public:
	Rectangle(double a, double b) : Quadriateral(a, b, a, b, 90, 90, 90, 90) {
		_name = "Прямоугольник";
	}
};

//Квадрат
class Squere : public Quadriateral {
public:
	Squere(double a) :Quadriateral(a, a, a, a, 90, 90, 90, 90) {
		_name = "Квадрат";
	}
};

//Параллелограмм
class Parallelogram : public Quadriateral {
public:
	Parallelogram(double a, double b, double A, double B) : Quadriateral(a, b, a, b, A, B, A, B) {
		_name = "Параллелограмм";
	}
};

//Ромб
class Rhombus : public Quadriateral {
public:
	Rhombus(double a, double A, double B) : Quadriateral(a, a, a, a, A, B, A, B) {
		_name = "Ромб";
	}
};


void printInfo(const Figure* figure) {
	figure->printInfo();
}


int main() {
	setlocale(LC_ALL, "Russian");

	Triangle Triangle1(10, 20, 30, 50, 60, 70);
	RightTriangle Righttriangle1(10, 20, 30, 70, 20);
	IsoTreangle Isotreangle1(10, 20, 70, 40);
	EquTriangle Equtreangle1(10);

	Quadriateral Quadriateral1(10, 20, 30, 40, 80, 90, 100, 90);
	Rectangle Rectangle1(10, 20);
	Squere Squere1(10);
	Parallelogram Parallelogram1(10, 20, 60, 30);
	Rhombus Rhombus1(10, 30, 60);

	printInfo(&Triangle1);
	printInfo(&Righttriangle1);
	printInfo(&Isotreangle1);
	printInfo(&Equtreangle1);
	printInfo(&Quadriateral1);
	printInfo(&Rectangle1);
	printInfo(&Squere1);
	printInfo(&Parallelogram1);
	printInfo(&Rhombus1);

	return 0;
}