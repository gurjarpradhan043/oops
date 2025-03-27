//write a program to demonstrate the concept of friend function 
#include <iostream>
using namespace std;

class Demo {
    private: 
    int value;
    public:
    Demo(int val) {
        value  = val;

    }
    friend void display(const Demo & obj);

};

void display(const Demo & ob) {
    cout << "The Value is: " << ob.value << endl;

}
int main() {
    Demo ob(41);
    display(ob);
    return 0;
}