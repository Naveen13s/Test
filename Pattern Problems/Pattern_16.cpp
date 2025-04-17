/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
A
BB
CCC
DDDD
EEEEE
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;  // Determine character for current row
        for (int j = 1; j <= i; j++) {
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
