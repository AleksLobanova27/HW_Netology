#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoTriangle.h"
#include "EquTriangle.h"
#include "Quadriateral.h"
#include "Rectangle.h"
#include "Squere.h"
#include "Parallelogram.h"
#include "Rhombus.h"



using namespace std;

void printInfo(const Figure* figure) {
    figure->printInfo();
}

int main() {
    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 70, 20);
    IsoTriangle isoTreangle(10, 20, 70, 40);
    EquTriangle equTriangle(10);

    Quadriateral quadriateral(10, 20, 30, 40, 80, 90, 100, 90);
    Rectangle rectangle(10, 20);
    Squere squere(10);
    Parallelogram parallelogram(10, 20, 60, 30);
    Rhombus rhombus(10, 30, 60);

    printInfo(&triangle);
    printInfo(&rightTriangle);
    printInfo(&isoTreangle);
    printInfo(&equTriangle);
    printInfo(&quadriateral);
    printInfo(&rectangle);
    printInfo(&squere);
    printInfo(&parallelogram);
    printInfo(&rhombus);

    return 0;
}
