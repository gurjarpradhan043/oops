//wap to overload the unary operator "++" using operator overloading
#include <iostream>
using namespace std;

class Counter {
    int count;

    public: 
    Counter(): count(0) {}  

    Counter operator++() {   
        ++count;
        return *this;
    }

    Counter operator++(int) {  
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() { 
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;  
    cout << "Initial" << endl;
    c.display();

    ++c;
    cout << "After pre-increment: " << endl;
    c.display();

    c++;
    cout << "After post-increment: " << endl; 
    c.display();

    return 0;
}
//output : 
// Initial
// Count: 0
// After pre-increment: 
// Count: 1
// After post-increment: 
// Count: 2