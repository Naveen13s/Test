//Reverse an array
/*Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
Examples:
Input: n=5, arr = [1,2,3,4,5]
Output: [5,4,3,2,1]
Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Input: n=6, arr = [1,2,1,1,5,1]
Output: [1,5,1,1,2,1]
Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

Input: n=3, arr = [1,2,1]
Output: [1,2,1]
Constraints:
1 <= n <= 104
1 <= arr[i] <= 105

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(int arr[], int n) {
        int start = 0;
        int end = n - 1;
        while (start < end) {
            // Swap the elements
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            // Move towards the middle
            start++;
            end--;
        }
    }
};
