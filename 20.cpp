#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);

    cout << "Enter second string: ";
    cin.getline(b, 100);

    if(strlen(a) != strlen(b)) {
        cout << "Not Anagrams";
        return 0;
    }

    // Convert to strings for sort()
    string s1 = a;
    string s2 = b;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2)
        cout << "Strings are Anagrams";
    else
        cout << "Not Anagrams";

    return 0;
}
