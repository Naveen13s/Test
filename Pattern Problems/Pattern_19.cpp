/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


Print the pattern in the function given to you.   */

#include <iostream>
using namespace std;

void printPattern(int n) {
    // Top half
    for (int i = 1; i <= n; i++) {
        int stars = n - i + 1;
        int spaces = 2 * (i - 1);

        // Print left stars
        for (int j = 0; j < stars; j++) cout << "*";

        // Print middle spaces
        for (int j = 0; j < spaces; j++) cout << " ";

        // Print right stars
        for (int j = 0; j < stars; j++) cout << "*";

        cout << endl;
    }

    // Bottom half (mirror of top)
    for (int i = 1; i <= n; i++) {
        int stars = i;
        int spaces = 2 * (n - i);

        // Print left stars
        for (int j = 0; j < stars; j++) cout << "*";

        // Print middle spaces
        for (int j = 0; j < spaces; j++) cout << " ";

        // Print right stars
        for (int j = 0; j < stars; j++) cout << "*";

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
