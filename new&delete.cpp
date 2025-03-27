// write a program to understand the concept of new and delete keyword
#include <iostream>
using namespace std;
int main() {
    int *ptr = new int;
    *ptr = 43 ;

    cout << "value : " << *ptr << endl;
    delete ptr;
    int *arr = new int[5];
    for(int i=0; i<5; i++) {
        arr[i] = i * 10 ;

    }
    cout << "array value : " ;
    for(int i =0; i<5; i++) {
        cout << arr[i] <<endl;

    }
    delete[] arr;
    return 0;
}