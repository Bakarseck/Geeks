#include "../library/lib.h"
#include "../library/calc.h"
#include "../library/sort.h"
#include "../library/struct.h"


int main() {
    Point point1;
    point1.x = 20;
    point1.y = 30;
    PrintIntegers(point1.x);
    Tabulation();
    PrintIntegers(point1.y);
    NextLine();
    initialiserCoordonnees(&point1);
    PrintIntegers(point1.x);
    Tabulation();
    PrintIntegers(point1.y);
}