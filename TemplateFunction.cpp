//wap to demonstrate the concept of template function 

#include <iostream>
using namespace std;

// Template Function
template <typename T>
T add(T a, T b) {  
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of doubles: " << add(5.5, 2.3) << endl;
    cout << "Sum of chars: " << add('A', char(1)) << endl; 

    return 0;
}
//output :-
// Sum of integers: 30
// Sum of doubles: 7.8
// Sum of chars: B