#include <iostream>
using namespace std;

double area(double side) {
    return side * side;
}

double perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area = " << area(side) << endl;
    cout << "Perimeter = " << perimeter(side) << endl;

    return 0;
}
