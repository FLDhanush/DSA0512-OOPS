#include <iostream>
using namespace std;
int sumOfEvenFibonacci(int n) {
    int a = 0, b = 1, sum_even = 0, next;
    for (int i = 0; i < n; ++i) {
        if (a % 2 == 0) {
            sum_even += a;
        }
        next = a + b;
        a = b;
        b = next;
    }
    return sum_even;
}
int main() {
    int num_terms;
    cout << "Enter the number of terms: ";
    cin >> num_terms;
    int result = sumOfEvenFibonacci(num_terms);
    cout << "Sum of even terms in the first " << num_terms << " terms of the Fibonacci series is: " << result << endl;
	return 0;
}
