#include <iostream>
using namespace std;
class Father {
    protected: 
    string surname = "Gurjar";
};
class son1: Father { 
    string name = "Pradhan ";
    public : 
    void show() {
        cout << name << " " << surname << endl;
    }
};
class son2 :Father {
    string name = "Manoj";
    public:
    void display() {
        cout << name << " " << surname <<  endl;
    }
};

int main() {
    son1 s1;
    son2 s2;

    s1.show();
    s2.display();
    
    return 0;
}