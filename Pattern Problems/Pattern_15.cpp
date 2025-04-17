/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
ABCDE
ABCD
ABC
AB
A
Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
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
