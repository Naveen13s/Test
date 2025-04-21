// Count number of odd digits in a number.
/*You are given an integer n. You need to return the number of odd digits present in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Examples:
Input: n = 5
Output: 1
Explanation: 5 is an odd digit.

Input: n = 25
Output: 1
Explanation: The only odd digit in 25 is 5.   */

#include <iostream>
using namespace std;

int countOddDigits(int n) {
    int count = 0;

    // Handle case when n is 0
    if (n == 0)
        return 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 1) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countOddDigits(n);
    cout << "Number of odd digits: " << result << endl;

    return 0;
}


