#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') length++;
    return length;
}

int main() {
    char str3[100];
    cout << "Enter a string to find its length: ";
    cin.getline(str3, 100);
    int length = stringLength(str3);
    cout << "The length of the string is: " << length << endl;
    return 0;
}