//wap that perform various operation like creating ,opening, reading and writing files usin file handling function
#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    
    ofstream outfile("sample.txt");  
    if (!outfile) {
        cout << "Error creating file!" << endl;
        return 1;
    }
    outfile << "Hello, this is a text file!" << endl;
    outfile.close();  

    
    ifstream infile("sample.txt");  
    if (!infile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {  
        cout << "File content: " << line << endl;
    }
    
    infile.close();  
    return 0;
}
//output :- 
//File content: Hello, this is a text file!