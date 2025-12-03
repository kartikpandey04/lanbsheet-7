#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

int main() {
    char str[200], result[200] = "";
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int j = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(!isVowel(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    cout << "String without vowels: " << result;
    return 0;
}
