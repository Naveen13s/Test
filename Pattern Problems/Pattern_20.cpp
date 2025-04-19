/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;

void printPattern(int n) {
    // Top half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "*";

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";

        // Right stars
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) cout << "*";

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";

        // Right stars
        for (int j = 1; j <= i; j++) cout << "*";

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
