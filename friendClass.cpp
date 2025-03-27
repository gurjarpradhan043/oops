//write a program to demonstrate the concept of friend class
#include <iostream>
using namespace std;

class demo{
    private: 
    int value;
    public:
    demo(int val) {
        value = val;

    }
    friend class friendClass;
};
 class friendClass {
    public:
    void display(const demo &obj ) {
        cout << "the value is: " << obj.value << endl;
    }
 };
 int main() {
    demo ob(40);
    friendClass fob;
    fob.display(ob);
    return 0;
 }