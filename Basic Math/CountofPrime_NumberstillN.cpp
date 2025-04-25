//Count of Prime Numbers till N
/*You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.
A prime number is a number which has no divisors except, 1 and itself.

Examples:
Input: n = 6
Output: 3
Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

Input: n = 10
Output: 4
Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.

Input: n = 20
Output: 8
Constraints: 2 <= n <= 1000     */


#include <iostream>
using namespace std;
class Solution {
public:
    int primeUptoN(int n) {
        int count = 0;
        for(int i = 2; i <= n; i++) {
            bool isPrime = true;
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) {
                count++;
            }
        }
        return count;
    }
};
