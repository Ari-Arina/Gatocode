#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool compareFiles (ifstream& result) {
    ifstream expect("expected.txt");
    string a;
    string b;
    int lines = 0;

    while ( expect >> a ) {
        lines++;
    }

    for (int i = 0; i < lines; i++) {
        getline(expect, a);
        getline(result, b);
        if ( a != b ) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Start of program" << endl;

    ofstream codeFile("code.cpp");
    if (!codeFile.is_open()) {
        cerr << "Failed to open input.txt" << endl;
        return 1;
    }

    string line = "";
    cout << "Start coding! Type 'gatocode' when done";
    getline(cin, line);

    while (line != "gatocode") {
        codeFile << line << endl;
        getline(cin, line);
    }

    codeFile.close();

    return 0; 
}  
