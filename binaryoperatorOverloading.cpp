//wap to overload the binary operators using operator overloading 
#include <iostream>
using namespace std;

class Number { 
    int value; 

    public: 
    Number(int v) : value(v) {} 

    
    Number operator+(const Number& obj) { 
        return Number(value + obj.value);
    }

    
    bool operator>(const Number& obj) { 
        return (value > obj.value);
    }

    void display() { 
        cout << "Value: " << value << endl;
    } 
};

int main() {
    Number n1(10), n2(20);  

    Number sum = n1 + n2;  
    sum.display();  

    if (n1 > n2)  
        cout << "n1 is greater than n2" << endl;
    else  
        cout << "n1 is not greater than n2" << endl;

    return 0;
}
//output :- 
// Value: 30
// n1 is not greater than n2