#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[200], s2[100], s3[100];

    cout << "Enter first part: ";
    cin.getline(s1, 200);

    cout << "Enter second part: ";
    cin.getline(s2, 100);

    cout << "Enter third part: ";
    cin.getline(s3, 100);

    strcat(s1, " ");
    strcat(s1, s2);
    strcat(s1, " ");
    strcat(s1, s3);

    cout << "Joined sentence: " << s1;
    return 0;
}
