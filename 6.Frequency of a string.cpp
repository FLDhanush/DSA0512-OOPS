#include <iostream>
using namespace std;

int charFrequency(const char* str, char ch) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) count++;
        i++;
    }
    return count;
}

int main() {
    char str12[100], ch;
    cout << "Enter a string: ";
    cin.getline(str12, 100);
    cout << "Enter a character to find its frequency: ";
    cin >> ch;
    int frequency = charFrequency(str12, ch);
    cout << "Frequency of '" << ch << "' is: " << frequency << endl;
    return 0;
}