/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1
22
333
4444
55555
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print the number 'i', 'i' times
        for (int j = 1; j <= i; j++) {
            cout << i;
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
