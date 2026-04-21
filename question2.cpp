#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;
    const double pi = 3.142;

    cout << "Enter the radius: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pi * pow(radius, 3);

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}
