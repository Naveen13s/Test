/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
E 
D E 
C D E 
B C D E 
A B C D E
Print the pattern in the function given to you.  */


#include <iostream>
using namespace std;

// Function to print the pattern
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        char start = 'A' + n - i;
        for (char ch = start; ch <= 'A' + n - 1; ch++) {
            cout << ch << " ";
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
