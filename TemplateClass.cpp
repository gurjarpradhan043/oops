#include <iostream>
#include <string>  // Needed for string template usage
using namespace std;

template <class T>
class Box { 
    T value;
    
    public: 
    Box(T v) : value(v) {}  

    void show() {  
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(10);
    Box<string> stringBox("Hello");

    intBox.show();
    stringBox.show();

    return 0;
}
//output:- 
// Value: 10
// Value: Hello