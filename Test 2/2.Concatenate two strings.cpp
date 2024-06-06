#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    result = str1 + str2;
    cout << "Result: " << result << endl;

    return 0;
}
