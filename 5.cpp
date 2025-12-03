#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    strcat(a, b);

    cout << "Concatenated string: " << a;
    return 0;
}
