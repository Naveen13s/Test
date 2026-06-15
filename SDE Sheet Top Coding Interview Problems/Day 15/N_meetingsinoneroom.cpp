//N meetings in one room
/* Given one meeting room and N meetings represented by two arrays, start and end, where start[i] represents the start time of the ith meeting and end[i] represents the end time of the ith meeting, 
determine the maximum number of meetings that can be accommodated in the meeting room if only one meeting can be held at a time.
Example 1
Input : Start = [1, 3, 0, 5, 8, 5] , End = [2, 4, 6, 7, 9, 9]
Output : 4
Explanation : The meetings that can be accommodated in meeting room are (1,2) , (3,4) , (5,7) , (8,9).

*/

class Solution {
public:
    static bool comparator(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<pair<int, int>> meetings;
        for (int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }
        sort(meetings.begin(), meetings.end(), comparator);
        int limit = meetings[0].second;
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (meetings[i].first > limit) {
                limit = meetings[i].second;
                count++;
            }
        }
        return count;
    }
};