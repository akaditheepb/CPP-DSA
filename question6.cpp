#include <iostream>
using namespace std;

int main() {
    double values[5];
    double sum = 0, average;

    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
        sum += values[i];
    }

    average = sum / 5;

    cout << "Average = " << average << endl;

    return 0;
}
