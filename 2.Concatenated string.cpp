#include <iostream>
using namespace std;

void concatenateStrings(char* dest, const char* src) {
    int i = 0;
    while (dest[i] != '\0') i++;
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char str6[100], str7[100];
    cout << "Enter first string: ";
    cin.getline(str6, 100);
    cout << "Enter second string: ";
    cin.getline(str7, 100);
    concatenateStrings(str6, str7);
    cout << "Concatenated string: " << str6 << endl;
    return 0;
}
