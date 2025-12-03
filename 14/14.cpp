#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];
    cout << "Enter main string: ";
    cin.getline(str, 200);
    cout << "Enter substring: ";
    cin.getline(sub, 100);

    char* pos = strstr(str, sub);

    if(pos != NULL)
        cout << "Substring found at index: " << (pos - str);
    else
        cout << "Substring NOT found";

    return 0;
}
