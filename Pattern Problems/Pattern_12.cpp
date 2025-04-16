/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321


Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;

// Function to print the mirrored number pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print spaces: 2 * (n - i)
        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
            cout << " ";
        }

        // Print decreasing numbers from i to 1
        for (int j = i; j >= 1; j--) {
            cout << j;
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
