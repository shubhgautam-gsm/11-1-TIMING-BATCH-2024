#include <iostream>
using namespace std;

int main() {
    int val1, val2;

    // Prompt the user for input
    cout << "val1 is: ";
    cin >> val1;
    cout << "val2 is: ";
    cin >> val2;

    // Perform the calculations
    int sum1 = val1 + val2;        // sum1 is val1 + val2
    int sum2 = sum1 + 250;         // sum2 is sum1 + 250
    int sum3 = sum2 + sum2;        // sum3 is sum2 + sum2

    // Print the results
    cout << "sum1: " << sum1 << "\n";
    cout << "sum2: " << sum2 << "\n";
    cout << "sum3: " << sum3 << "\n";

    return 0;
}
