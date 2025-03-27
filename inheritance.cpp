//write a cpp program to demonstrate inheritance 
#include <iostream>
using namespace std;
class parent {
    public:
    void display() {
        cout << "This is parent class \n";

    }
};
class child : public parent {
    public : 
    void show() {
        cout << "This is child class \n";

    }
};

int main() {
    child obj;
    obj.display();
    obj.show();
    return 0;
}