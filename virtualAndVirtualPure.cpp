//wap  having virtual and pure virtual funcation to demonstrate the concept of method overriding 
#include <iostream>
using namespace std;

class Base {
    public : 
    virtual void show() {
        cout << "Base class show() called\n";
    }
    virtual void display() = 0; 
};

class Derived : public Base {
    public : 
    void show() override { 
        cout << "Derived class show() called\n";
    }
    
    void display() override { 
        cout << "Derived class display() called.\n";
    }
};

int main() {
    Derived d;
    Base *ptr = &d;
    ptr->show(); 
    ptr->display(); 
    
    return 0;
}

//  output : 
//  Derived class show() called
//  Derived class display() called