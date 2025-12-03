#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    char names[50][50];

    cout << "Enter names:\n";
    for(int i = 0; i < n; i++)
        cin.getline(names[i], 50);

    // Bubble sort using strcmp
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(strcmp(names[j], names[j+1]) > 0)
                swap(names[j], names[j+1]);

    cout << "Sorted names:\n";
    for(int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}
