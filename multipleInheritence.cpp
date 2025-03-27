//wap to demonstrate multiple inheritence 
#include <iostream>
using namespace std;

class grandparent {
    public:
    void show() {
        cout << "this is grandfather class \n" ;

    }
};
class parent : public grandparent {
    public :
    void display() {
        cout << "this is parent class \n " ;
    }
};
class child : public parent {
    public : 
    void message() {
        cout << "this is child clas \n ";

    }
};
int main() {
    child ob;
    ob.show();
    ob.display();
    ob.message();
    return 0;
}