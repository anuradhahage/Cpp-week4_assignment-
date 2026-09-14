#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;
    int n, roll;
    string name;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter roll number: ";
        cin >> roll;

        cout << "Enter student name: ";
        cin >> name;

        students[roll] = name;
    }

    cout << "\n--- Student Records ---\n";

    for (auto student : students) {
        cout << "Roll No: " << student.first
             << "  Name: " << student.second << endl;
    }

    return 0;
}
