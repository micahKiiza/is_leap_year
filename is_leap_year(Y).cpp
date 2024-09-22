#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    if (Y % 400 == 0) {
        return true;
    } else if (Y % 100 == 0) {
        return false;
    } else if (Y % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    unsigned int year;
    cout << "Enter a year: ";
    cin >> year;

    if (is_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

