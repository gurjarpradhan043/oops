#include <iostream>
#include <fstream>  // File handling library
using namespace std;

int main() {
    // Writing to a file
    ofstream outfile("sample.txt");  // Create a file
    if (!outfile) {
        cout << "Error creating file!" << endl;
        return 1;
    }
    outfile << "Hello, this is a text file!" << endl;
    outfile.close();  // Always close the file

    // Reading from the file
    ifstream infile("sample.txt");  // Open file for reading
    if (!infile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {  // Read line by line
        cout << "File content: " << line << endl;
    }
    
    infile.close();  // Close the file after reading
    return 0;
}