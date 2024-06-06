#include <iostream>
using namespace std;

int main() {
    int limit, sum = 0, i = 1;
    cout << "Enter the limit: ";
    cin >> limit;
    while (i <= limit) {
        sum += i;
        i++;
    }
    cout << "The sum of natural numbers up to " << limit << " is: " << sum << endl;

    return 0;
}
