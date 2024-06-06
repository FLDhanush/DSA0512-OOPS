#include <iostream>
using namespace std;

void toLowerCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + ('a' - 'A');
        i++;
    }
}

int main() {
    char str9[100];
    cout << "Enter a string to convert to lowercase: ";
    cin.getline(str9, 100);
    toLowerCase(str9);
    cout << "Lowercase string: " << str9 << endl;
    return 0;
}