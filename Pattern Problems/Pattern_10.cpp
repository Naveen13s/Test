/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****
****
***
**
*
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;
class Solution {
    public: 
        void pattern10(int n) {
            for (int i = 1; i <= 2 * n - 1; i++) {
                int stars = i;
                if (i > n) stars = 2 * n - i;
                for (int j = 1; j <= stars; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    
    };
    
