//crate a class with these two methods get data() and displaydata() and access them using object and array of object 

#include <iostream>
using namespace std;

class MyClass {
    private : 
    int data;

    public:
    void getData() {
        cout << "enter data ";
        cin >> data ;
    }
    void displayData() {
        cout << "data " << data << endl;

    }
};
    int main() {
        MyClass obj;
        obj.getData();
        obj.displayData();

        MyClass objArr[3] ;
        for(int i=0; i<3; i++) {
            cout << "object " << i+1 <<  ": "<< endl;
            objArr[i].getData();
        }
        for(int i=0; i<3; i++) {
            cout << "object " << i+1 << ":" << endl;
            objArr[i].displayData();
      }
            return 0;
    }
