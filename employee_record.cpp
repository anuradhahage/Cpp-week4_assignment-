#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    vector<Employee> employees;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Employee emp;

        cout << "\nEnter Employee ID: ";
        cin >> emp.id;

        cout << "Enter Employee Name: ";
        cin >> emp.name;

        cout << "Enter Salary: ";
        cin >> emp.salary;

        employees.push_back(emp);
    }

    // Save records to file
    ofstream outFile("employees.txt");

    if (!outFile) {
        cout << "Unable to open file.";
        return 1;
    }

    for (Employee emp : employees) {
        outFile << emp.id << " "
                << emp.name << " "
                << emp.salary << endl;
    }

    outFile.close();

    cout << "\nEmployee records saved successfully.";

    // Display records
    cout << "\n\n--- Employee Records ---\n";

    for (Employee emp : employees) {
        cout << "ID: " << emp.id << endl;
        cout << "Name: " << emp.name << endl;
        cout << "Salary: " << emp.salary << endl;
        cout << "------------------\n";
    }

    return 0;
}
