#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[200], key[100];
    cout << "Enter main string: ";
    cin.getline(mainStr, 200);
    cout << "Enter search string: ";
    cin.getline(key, 100);

    if(strstr(mainStr, key) != NULL)
        cout << "String FOUND inside the main string";
    else
        cout << "String NOT found";

    return 0;
}
