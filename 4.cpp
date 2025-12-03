#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100], temp[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    strcpy(temp, a);  // Copy a to temp for comparison

    if(strcmp(temp, b) == 0)
        cout << "Strings are equal.";
    else
        cout << "Strings are NOT equal.";

    return 0;
}
