#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[50], last[50], full[100];

    cout << "Enter first name: ";
    cin.getline(first, 50);
    cout << "Enter last name: ";
    cin.getline(last, 50);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    cout << "Full name = " << full;
    return 0;
}
