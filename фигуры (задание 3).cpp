#include <iostream>
#include <string>
#include <cmath>


using namespace std;

//фигура
class Figure {
protected:
	int _numSides = 0;
	string _name = "фигура";

	virtual bool Check() const {
		return _numSides >= 0 ;
	}

public:
	Figure(int sides) : _numSides(sides){}
	virtual void printInfo() const {
		cout << _name << " :\n";
		cout << (Check() ? "Правильная" : "Неправильная") << "\n";
		cout << "Количество сторон : " << _numSides << "\n";
	}
	virtual ~Figure() = default;
};


//треугольник
class Triangle : public Figure {
protected:
	double _a, _b, _c; //стороны
	double _A, _B, _C; //углы

	bool Check() const override {
		return Figure::Check() && _numSides == 3 && abs(_A + _B + _C - 180 ) == 0;
	}
public:
	Triangle(double a, double b, double c, double A, double B, double C)
		: Figure(3),_a(a), _b(b), _c(c), _A(A), _B(B), _C(C) {
		
		_name = "Треугольник";
	}
	void printInfo() const override {
		Figure::printInfo();
		cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c << "\n";
		cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C << "\n" << endl;
	}
};

//Прямоугольный треугольник
class RightTriangle : public Triangle {
	bool Check() const override {
		return Triangle::Check() && abs(_C - 90) == 0;
	}
public:
	RightTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
		_name = "Прямоугольный треугольник";
	}
};

//Равнобедренный треугольник
class IsoTreangle : public Triangle {
	bool Check() const override {
		return Triangle::Check() && abs(_a - _c) == 0;
	}
public:
	IsoTreangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
		_name = "Равнобедренный треугольник";
	}
};

//Равносторонний треугольник
class EquTriangle : public Triangle {
	bool Check() const override {
		return Triangle::Check() && abs(_a - _b) == 0 && abs(_b - _c) == 0 && abs(_A - 60) == 0 && abs(_B - 60) == 0 && abs(_C - 60) == 0;
	}
public:
	EquTriangle(double a, double b, double c, double A, double B, double C) : Triangle(a, b, c, A, B, C) {
		_name = "Равносторонний треугольник";
	}
};


//Четырёхугольник
class Quadrilateral : public Figure {
protected:
	double _a, _b, _c, _d; //стороны
	double _A, _B, _C, _D; //углы

	bool Check() const override {
		return Figure::Check() && _numSides == 4 && abs(_A + _B + _C + _D - 360) == 0;
	}
public:
	Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
		: Figure(4), _a(a), _b(b), _c(c), _d(d), _A(A), _B(B), _C(C), _D(D) {
	
		_name = "Четырёхугольник";
	}

	void printInfo() const override {
		Figure::printInfo();
		cout << "Стороны: a = " << _a << " b = " << _b << " c = " << _c << " d = " << _d << "\n";
		cout << "Углы: A = " << _A << " B = " << _B << " C = " << _C << " D = " << _D << "\n" << endl;
	}
};

//Прямоугольник
class Rectangle : public Quadrilateral {
	bool Check() const override {
		return Quadrilateral::Check() && abs(_a - _c) == 0 && abs(_b - _d) == 0 && abs(_A - 90) == 0 && abs(_B - 90)== 0 && abs(_C - 90) == 0 && abs(_D - 90) == 0;
	}
public:
	Rectangle(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		_name = "Прямоугольник";
	}
};

//Квадрат
class Square : public Quadrilateral {
	bool Check() const override {
		return Quadrilateral::Check() && abs(_a - _b) == 0 && abs(_b - _c) == 0 && abs(_c - _d) == 0 && abs(_A - 90) == 0 && abs(_B - 90) == 0 && abs(_C - 90) == 0 && abs(_D - 90) == 0;
	}
public:
	Square(double a, double b, double c, double d, double A, double B, double C, double D) :Quadrilateral(a, b, c, d, A, B, C, D) {
		_name = "Квадрат";
	}
};

//Параллелограмм
class Parallelogram : public Quadrilateral {
	bool Check() const override {
		return Quadrilateral::Check() && abs(_a - _c) == 0 && abs(_b - _d) == 0 && abs(_A - _C) == 0 && abs(_B - _D) == 0;
	}
public:
	Parallelogram(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		_name = "Параллелограмм";
	}
};

//Ромб
class Rhombus : public Quadrilateral {
	bool Check() const override {
		return Quadrilateral::Check() && abs(_a - _b) == 0 && abs(_b - _c) == 0 && abs(_c - _d) == 0 && abs(_A - _C) == 0 && abs(_B - _D) == 0;
	}
public:
	Rhombus(double a, double b, double c, double d, double A, double B, double C, double D) : Quadrilateral(a, b, c, d, A, B, C, D) {
		_name = "Ромб";
	}
};




int main() {
	setlocale(LC_ALL, "Russian");

	Figure Figure1(0);
	Triangle Triangle1(10, 20, 30, 50, 60, 70);
	RightTriangle Righttriangle1(10, 20, 30, 50, 60, 90);
	RightTriangle Righttriangle2(10, 20, 30, 50, 40, 90);
	IsoTreangle Isotreangle1(10, 20, 10, 50, 60, 50);
	EquTriangle Equtreangle1(30, 30, 30, 60, 60, 60);

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle Rectangle1(10, 20, 10, 20, 90, 90, 90, 90);
	Square Square1(20, 20, 20, 20, 90, 90, 90, 90);
	Parallelogram Parallelogram1(20, 30, 20, 30, 30, 40, 30, 40);
	Rhombus Rhombus1(30, 30, 30, 30, 30, 40, 30, 40);

	Figure1.printInfo();
	cout << "\n";
	Triangle1.printInfo();
	Righttriangle1.printInfo();
	Righttriangle2.printInfo();
	Isotreangle1.printInfo();
	Equtreangle1.printInfo();
	Quadrilateral1.printInfo();
	Rectangle1.printInfo();
	Square1.printInfo();
	Parallelogram1.printInfo();
	Rhombus1.printInfo();

	return 0;
}