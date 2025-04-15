/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    * 
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;

// Function to print full diamond pattern
void printPattern(int n) {
    // Upper pyramid (including middle line)
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower inverted pyramid
    for (int i = n; i >= 1; i--) {
        // Spaces
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        // Stars
        for (int star = 1; star <= 2 * i - 1; star++) {
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
