/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1
Print the pattern in the function given to you */

#include <iostream>
using namespace std;


void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int start = (i % 2 == 0) ? 0 : 1;  // Even row starts with 0, odd with 1
        for (int j = 1; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;  // Flip between 1 and 0
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
