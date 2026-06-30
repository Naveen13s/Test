//Rabin Karp Algorithm
/* Given a string text and a string pattern, implement the Rabin-Karp algorithm to find the starting index of all occurrences of pattern in text. If pattern is not found, return an empty list.*/

class Solution {
   public:
    vector<int> search(string pattern, string text) {
        vector<int> ans;

        int n = text.size();
        int m = pattern.size();

        if (m > n) return ans;

        const int base = 256;
        const int mod = 1000000007;

        long long patternHash = 0;
        long long textHash = 0;
        long long h = 1;

        // Compute base^(m-1) % mod
        for (int i = 0; i < m - 1; i++) h = (h * base) % mod;

        // Initial hash values
        for (int i = 0; i < m; i++) {
            patternHash = (patternHash * base + pattern[i]) % mod;
            textHash = (textHash * base + text[i]) % mod;
        }

        for (int i = 0; i <= n - m; i++) {
            if (patternHash == textHash) {
                bool match = true;

                for (int j = 0; j < m; j++) {
                    if (text[i + j] != pattern[j]) {
                        match = false;
                        break;
                    }
                }

                if (match) ans.push_back(i);
            }

            if (i < n - m) {
                textHash = (base * (textHash - text[i] * h % mod + mod) + text[i + m]) % mod;
            }
        }

        return ans;
    }
};