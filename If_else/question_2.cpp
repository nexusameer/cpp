#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Sorting using if-else with only the < operator
    if (a < b) {
        if (b < c) {
            cout << a << " " << b << " " << c << endl;
        } else {
            if (a < c) {
                cout << a << " " << c << " " << b << endl;
            } else {
                cout << c << " " << a << " " << b << endl;
            }
        }
    } else {
        if (a < c) {
            cout << b << " " << a << " " << c << endl;
        } else {
            if (b < c) {
                cout << b << " " << c << " " << a << endl;
            } else {
                cout << c << " " << b << " " << a << endl;
            }
        }
    }

    return 0;
}
