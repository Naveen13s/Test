//Minimum number of platforms required for a railway
/* Given the arrival and departure times of all trains reaching a particular railway station, determine the minimum number of platforms required so that no train is kept waiting. Consider all trains arrive and depart on the same day.
In any particular instance, the same platform cannot be used for both the departure of one train and the arrival of another train, necessitating the use of different platforms in such cases.
Note: Time intervals are in the minutes , Leading zeros for minutes less than 1000 are optional (e.g., 0900 is the same as 900).
Example 1
Input : Arrival = [900, 940, 950, 1100, 1500, 1800] , Departure = [910, 1200, 1120, 1130, 1900, 2000]
Output : 3
Explanation : The first , second , fifth number train can use the platform 1.
The third and sixth train can use the platform 2.
The fourth train will use platform 3.
So total we need 3 different platforms for the railway station so that no train is kept waiting.

*/
class Solution {
public:
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();

        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int platforms = 1;
        int ans = 1;

        int i = 1, j = 0;

        while (i < n && j < n) {
            // Arrival at same time as departure needs a new platform
            if (arr[i] <= dep[j]) {
                platforms++;
                ans = max(ans, platforms);
                i++;
            } else {
                platforms--;
                j++;
            }
        }

        return ans;
    }
};