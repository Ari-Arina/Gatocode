#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "Start of program" << endl;

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open input.txt" << endl;
        return 1;
    }

    int arr[4];
    int index = 0;

    while (inputFile >> arr[index]) {
        index++; 
    }

    inputFile.close();

    ofstream outputFile("output.txt");
    
    for (int i = 0; i < arr[0]; i++) {
        int depth = arr[i+1];
        int minutes = 0;
        int result = 60;
        
        minutes += (depth/10)*2;
        minutes += (depth-30)/10;

        result -= minutes+1;

        if (result < 0) {
            result = 0;
        }

        outputFile << result << " minute(s) at " << depth << " feet" << endl;
    }

    outputFile.close();

    return 0;
}