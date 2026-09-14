#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string data;

    cout << "Enter data: ";
    getline(cin, data);

    // Write data to file
    ofstream outFile("data.txt");

    if (!outFile) {
        cout << "Unable to open file.";
        return 1;
    }

    outFile << data;
    outFile.close();

    // Read data from file
    ifstream inFile("data.txt");

    if (!inFile) {
        cout << "Unable to open file.";
        return 1;
    }

    string readData;
    getline(inFile, readData);
    inFile.close();

    cout << "\nData read from file: " << readData;

    return 0;
}
