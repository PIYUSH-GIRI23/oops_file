#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream sourceFile("source.txt"); 
    ofstream destinationFile("destination.txt"); 
    if (sourceFile && destinationFile) { 
        string line;
        while (getline(sourceFile, line)) { 
            destinationFile << line << "\n";
        }
        cout << "File copied successfully." <<endl;
    } else {
        cout<< "Error: Unable to open files." << endl;
    }
    sourceFile.close(); 
    destinationFile.close(); 
    return 0;
}