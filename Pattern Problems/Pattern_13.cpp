/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1 

2 3 

4 5 6 

7 8 9 10 

11 12 13 14 15

Print the pattern in the function given to you. */

#include <iostream>
using namespace std;

// Function to print the number triangle pattern
void printPattern(int n) {
    int num = 1; // Start from 1
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
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
