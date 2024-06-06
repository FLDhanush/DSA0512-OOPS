#include <iostream>
using namespace std;

void reverseString(char* str) {
    int length = 0;
    while (str[length] != '\0') length++;
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str1[100];
    cout << "Enter a string to reverse: ";
    cin.getline(str1, 100);
    reverseString(str1);
    cout << "Reversed string: " << str1 << endl;
    return 0;
}