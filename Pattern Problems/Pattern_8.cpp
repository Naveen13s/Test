/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.  */

#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern8(int n) {
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=i-1; j++) {
                    cout << " ";
                }
                for(int j=1; j<=2*(n-i)+1; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    };