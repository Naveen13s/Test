/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;

// Function to print inverted centered pyramid
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space < i; space++) {
            cout << " ";
        }

        // Print stars
        int stars = 2 * (n - i + 1) - 1;
        for (int star = 1; star <= stars; star++) {
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
