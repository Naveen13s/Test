//Sort Characters by Frequency
/*You are given a string s. Return the array of unique characters, sorted by highest to lowest occurring characters.
If two or more characters have same frequency then arrange them in alphabetic order.

Examples:
Input : s = "tree"
Output : ['e', 'r', 't' ]
Explanation : The occurrences of each character are as shown below :
e --> 2
r --> 1
t --> 1.
The r and t have same occurrences , so we arrange them by alphabetic order.

Input : s = "raaaajj"
Output : ['a' , 'j', 'r' ]
Explanation : The occurrences of each character are as shown below :
a --> 4
j --> 2
r --> 1

Input : s = "bbccddaaa"
Output:
['a', 'b', 'c', 'd']
Constraints:
1 <= s.length <= 105
s consist of only lowercase English characters.
*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<char> frequencySort(string& s) {
            unordered_map<char, int> freqMap;
            for (char c : s) {
                freqMap[c]++;
            }

            // Creating a vector of pairs (character, frequency)
            vector<pair<char, int>> freqVector(freqMap.begin(), freqMap.end());

            // Sorting the vector by frequency and then by character
            sort(freqVector.begin(), freqVector.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
                if (a.second == b.second) {
                    return a.first < b.first; // Alphabetical order
                }
                return a.second > b.second; // Sort by frequency
            });

            vector<char> ans;
            for (const auto& p : freqVector) {
                ans.push_back(p.first);
            }
            return ans;
        }
};