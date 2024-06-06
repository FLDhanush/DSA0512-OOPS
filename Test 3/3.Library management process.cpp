#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Book {
private:
    int bookID;
    string bookName;
public:
    Book(int id, const string& name) : bookID(id), bookName(name) {}
    int getBookID() const {
        return bookID;
    }
    string getBookName() const {
        return bookName;
    }
};
class User {
private:
    int regNo;
    string userName;

public:
    User(int reg, const string& name) : regNo(reg), userName(name) {}
    int getRegNo() const {
        return regNo;
    }
    string getUserName() const {
        return userName;
    }
};

int main() {
    stack<Book> bookStack;
    stack<User> userStack;
    bookStack.push(Book(101, "Introduction to Programming"));
    bookStack.push(Book(102, "Data Structures and Algorithms"));
    userStack.push(User(1001, "Alice"));
    userStack.push(User(1002, "Bob"));
    int requiredBookID = 101;
    bool bookFound = false;
    stack<Book> tempBookStack = bookStack; 
    while (!tempBookStack.empty()) {
        if (tempBookStack.top().getBookID() == requiredBookID) {
            bookFound = true;
            break;
        }
        tempBookStack.pop();
    }

    if (bookFound) {
        cout << "Book with ID " << requiredBookID << " is available." << endl;
    } else {
        cout << "Book with ID " << requiredBookID << " is not available." << endl;
    }
    if (!bookStack.empty() && !userStack.empty()) {
        Book distributedBook = bookStack.top();
        User receivingUser = userStack.top();
        cout << "Book \"" << distributedBook.getBookName() << "\" is distributed to user " << receivingUser.getUserName() << endl;
        bookStack.pop();
        userStack.pop();
    } else {
        cout << "Insufficient books or users for distribution." << endl;
    }

    return 0;
}
