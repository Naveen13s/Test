/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
1
12
123
1234
12345
Print the pattern in the function given to you.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern3(int n) {
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                cout << j;
            }
            cout << endl;
        }
    }
};

//"Added JavaScript Solution"
class Solution {
    pattern3(n) {
        for (let i=1; i<=n; i++ ){
            for (let j= 1; j<= i; j++){
                process.stdout.write(`${j}`);
            }
            console.log();
        }

    }
}
