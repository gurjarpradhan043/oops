#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0)
            throw "Division by zero is not allowed";
        cout << "Result: " << num1 / num2 << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}