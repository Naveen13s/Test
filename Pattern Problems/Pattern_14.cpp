/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
A
AB
ABC
ABCD
ABCDE
Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern14(int n) {
            for(int i = 1; i <= n; i++) {
                for(char ch = 'A'; ch <= 'A' + i - 1; ch++) {
                    cout << ch;
                }
                cout << endl;
            }
        }
    };