//write a cpp program to demostrate function overloading 
#include <iostream>
using namespace std;
void show(int n) {
    cout << "n = " << n << endl;
}
void show(int n1, int n2) {
    cout << "n1 = " <<  n1 << "n2 = " << n2 << endl;

}  
    void show(double n) {
        cout << "n = " << n << endl;

    }
    void show(int n, double d, string s) {
        cout << "n = " << n;
        cout << "d = " << d;
        cout << "s = " << s;

    }
    int main() {
        show(100);
        show(15,25);
        show(20,75);
        show(10,15.5,"bat");
        return 0;

    }