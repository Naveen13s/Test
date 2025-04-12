/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****
Print the pattern in the function given to you.*/


#include <iostream>
using namespace std;

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print i stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Main function to test
int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    printPattern(n);

    return 0;
}
