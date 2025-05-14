/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1
Print the pattern in the function given to you */

#include <iostream>
using namespace std;
class Solution {
    public:
        void pattern11(int n) {
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= i; j++){
                    if((i-j)%2==0) cout<<"1 ";
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }
    };
    