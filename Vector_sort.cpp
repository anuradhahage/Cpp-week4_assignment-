#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    cout << "Sorted elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
