//write a program to apply different type of constructor and destructor over the class
#include <iostream>
using namespace std;

class Demo {
    int num;
    public:
    Demo() {
        num =0;
        cout << "Default Constroctor \n" ;

    }
    Demo(int n) {
     num = n;
     cout << "Parameterized constructor \n" ;

    }
    Demo(const Demo & obj) {
        num = obj.num;
        cout <<"copy constructor \n";
    }
    ~Demo() {
        cout << "Destructor called \n";
    }
    void show() {
        cout << "number " << num << endl;

    }
};
    int main() {
        Demo d1 ;
        Demo d2(10) ;
        Demo d3(d2);
        d1.show();
        d2.show();
        d3.show();
        return 0;
    }