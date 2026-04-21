#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int seconds = days * 24 * 60 * 60;

    cout << "There are " << seconds << " seconds in " << days << " day(s)." << endl;

    return 0;
}
