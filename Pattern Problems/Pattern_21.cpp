/* Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*****
*   *
*   *
*   *
*****


Print the pattern in the function given to you.  */


#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // First and last rows: all stars
        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }
        } else {
            // Middle rows: star, spaces, star
            cout << "*";
            for (int j = 1; j <= n - 2; j++) {
                cout << " ";
            }
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
