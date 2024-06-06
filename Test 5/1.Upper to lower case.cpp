#include <iostream>
#include <string>
#include <cctype>

class StringConverter {
private:
    std::string str;

public:
    void setString(std::string s) {
        str = s;
    }

    std::string toUpperCase() {
        for (int i = 0; i < str.length(); i++) {
            str[i] = toupper(str[i]);
        }
        return str;
    }

    std::string toLowerCase() {
        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        return str;
    }

    int countCapitalLetters() {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    StringConverter converter;
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    converter.setString(input);

    std::cout << "Original string: " << input << std::endl;
    std::cout << "Uppercase string: " << converter.toUpperCase() << std::endl;
    std::cout << "Lowercase string: " << converter.toLowerCase() << std::endl;
    std::cout << "Number of capital letters: " << converter.countCapitalLetters() << std::endl;

    return 0;
}