/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
12345
1234
123
12
1
Print the pattern in the function given to you.   */

#include <iostream>
using namespace std;
class Solution {
    public:
    void pattern6(int n) {
        int cnt = 0;
        for (int i = 0; i < n; i++) { // Change from i <= n to i < n
            for (int j = 1; j <= n - cnt; j++) {
                cout << j;
            }
            cnt++;
            cout << endl;
        }
    }
};