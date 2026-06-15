//Fractional Knapsack
/*  You have n items; the i-th item has value val[i] and weight wt[i].
    A knapsack can carry at most capacity units of weight.
    You may take any fraction of an item (i.e. split items).
    Return the maximum total value that can be placed in the knapsack, rounded to exactly 6 decimal places.

    Example 1
    Input: val = [60,100,120], wt = [10,20,30], capacity = 50
    Output: 240.000000
    Explanation:
    • Take item 0 (w=10, v=60)
    • Take item 1 (w=20, v=100)
    • Take 2⁄3 of item 2 (w=20, v=80)
    Total value = 60 + 100 + 80 = 240      
    */

    class Solution {
   public:
    double fractionalKnapsack(vector<long long>& val, vector<long long>& wt,
                              long long capacity) {
        int n = val.size();

        vector<pair<double, int>> items;

        for (int i = 0; i < n; i++) {
            items.push_back({(double)val[i] / wt[i], i});
        }

        sort(items.begin(), items.end(), greater<pair<double, int>>());

        double ans = 0.0;

        for (auto& item : items) {
            int idx = item.second;

            if (capacity >= wt[idx]) {
                ans += val[idx];
                capacity -= wt[idx];
            } else {
                ans += item.first * capacity;
                break;
            }
        }

        return ans;
    }
};
