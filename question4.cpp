#include <iostream>
using namespace std;

bool isUpperCase(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

bool isLowerCase(char ch) {
    return ch >= 'a' && ch <= 'z';
}

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isUpperCase(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    } else if (isLowerCase(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    } else {
        cout << ch << " is not an alphabet letter." << endl;
    }

    return 0;
}
