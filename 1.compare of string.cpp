#include <iostream>
using namespace std;

int compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}

int main() {
    char str4[100], str5[100];
    cout << "Enter first string: ";
    cin.getline(str4, 100);
    cout << "Enter second string: ";
    cin.getline(str5, 100);
    int result = compareStrings(str4, str5);
    if (result == 0) cout << "The strings are equal." << endl;
    else if (result < 0) cout << "The first string is less than the second string." << endl;
    else cout << "The first string is greater than the second string." << endl;
    return 0;
}
