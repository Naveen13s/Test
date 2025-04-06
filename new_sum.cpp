 
#include <iostream>
using namespace std;

// A function to add two numbers for
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = add(num1, num2);

    cout << "The sum is: " << sum << endl;

    return 0;
}
