/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****
Print the pattern in the function given to you.*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern2(int n) {
        int i, j; 
        for(i = 0 ; i < n ; i++)
        {
            for (j = 0 ; j <= i ; j++)
            {
                cout << "*";
            }
             cout << endl;   
        }
    }
};

