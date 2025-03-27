// To Find the Leap Year
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if(year % 400 == 0 ) return true;
    if(year % 100 == 0) return false;
    if(year % 4 == 0) return true;
    return false;
}
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    bool leap = isLeapYear(year);

    if(leap) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is a leap year." << endl; 
    }
}