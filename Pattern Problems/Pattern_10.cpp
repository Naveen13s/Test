/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****
****
***
**
*
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;

// Function to print the increasing + decreasing triangle pattern
void printPattern(int n) {
    // Increasing part
    for (int i = 1; i <= n; i++) {
        for (int star = 1; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Decreasing part
    for (int i = n - 1; i >= 1; i--) {
        for (int star = 1; star <= i; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPattern(n);

    return 0;
}
