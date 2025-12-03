#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char src[100], dest[100];
    cout << "Enter source string: ";
    cin.getline(src, 100);

    strcpy(dest, src);

    cout << "Copied string: " << dest;
    return 0;
}
