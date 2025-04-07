#include <iostream>
using namespace std;

// Function to return Nth Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base cases: fib(0) = 0, fib(1) = 1
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
