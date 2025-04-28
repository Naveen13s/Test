//Sum of Highest and Lowest Frequency
/*Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.
Examples:
Input: arr = [1, 2, 2, 3, 3, 3]
Output: 4
Explanation: The highest frequency is 3 (element 3), and the lowest frequency is 1 (element 1). Their sum is 3 + 1 = 4.

Input: arr = [4, 4, 5, 5, 6]
Output: 3
Explanation: The highest frequency is 2 (elements 4 and 5), and the lowest frequency is 1 (element 6). Their sum is 2 + 1 = 3.

Input: arr = [10, 9, 7, 7, 8, 8, 8]
Output: 4
Constraints: 1 <= n <= 105
1 <= arr[i] <= 104
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumHighestAndLowestFrequency(std::vector<int>& nums) {
        // Special case: if the input is empty
        if (nums.empty()) return 0;

        // Use a map to count frequencies
        std::unordered_map<int, int> frequencyMap;
        for (int n : nums) {
            frequencyMap[n]++;
        }

        // Initialize min and max frequency
        int minFreq = INT_MAX;
        int maxFreq = 0;

        // Iterate through frequency map to find min and max frequencies
        for (const auto& entry : frequencyMap) {
            minFreq = std::min(minFreq, entry.second);
            maxFreq = std::max(maxFreq, entry.second);
        }

        // Return the sum of min and max frequencies
        return minFreq + maxFreq;
    }
};