#include <iostream>
using namespace std;

// Function to calculate a^b recursively
int power(int base, int exponent) {
    if (exponent == 0)
        return 1;  // Base case: anything^0 = 1
    return base * power(base, exponent - 1);
}

int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    int result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;

    return 0;
}
