#include <iostream>
using namespace std;

int countWords(const char* str) {
    int count = 0;
    bool inWord = false;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') inWord = false;
        else if (!inWord) {
            inWord = true;
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str11[100];
    cout << "Enter a string to count words: ";
    cin.getline(str11, 100);
    int wordCount = countWords(str11);
    cout << "Number of words: " << wordCount << endl;
    return 0;
}