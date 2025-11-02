#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "Start of program" << endl;

    string line;

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open input.txt" << endl;
        return 1;
    }

    // use the correct lowercase 'getline' from <string>
    getline(inputFile, line);
    cout << line << endl;

    return 0;
}