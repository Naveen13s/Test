/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    * 
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.*/

#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern9(int n) {
            // Upper part of the pattern
            for (int i = 0; i < n; i++) {
                // Print leading spaces
                for (int j = 0; j < (n - i - 1); j++) {
                    cout << " ";
                }
                // Print stars
                for (int j = 0; j < (2 * i + 1); j++) {
                    cout << "*";
                }
                cout << endl;
            }
            // Lower part of the pattern
            for (int i = n - 1; i >= 0; i--) {
                // Print leading spaces
                for (int j = 0; j < (n - i - 1); j++) {
                    cout << " ";
                }
                // Print stars
                for (int j = 0; j < (2 * i + 1); j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    };
