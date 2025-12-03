#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char src[100], dest[100];

    cout << "Enter a string: ";
    cin.getline(src, 100);

    strncpy(dest, src, 5);
    dest[5] = '\0';  // null-terminate manually

    cout << "Copied first 5 characters: " << dest;
    return 0;
}
