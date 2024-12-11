#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "HelloWorld";
    myString.replace(2, 3, "Jo"); // Replace first 2 characters with "Jo"
    cout << myString;
    return 0;
}
