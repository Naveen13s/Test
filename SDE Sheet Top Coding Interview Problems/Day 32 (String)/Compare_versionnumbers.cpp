//Compare version numbers
/* Given two version numbers, version1 and version2, compare them.
   A version number is a string consisting of dot . separated integers. Each segment (called a revision) is a non-negative integer, and leading zeroes should be ignored during comparison.
   You must compare the version numbers revision by revision from left to right:
   If version1 < version2, return -1.
   If version1 > version2, return 1.
   Otherwise, return 0.
*/
class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream s1(version1), s2(version2);
        string token1, token2;
        while (s1.good() || s2.good()) {
            if (!getline(s1, token1, '.'))
                token1 = "0";
            if (!getline(s2, token2, '.'))
                token2 = "0";

            int num1 = stoi(token1);
            int num2 = stoi(token2);

            if (num1 < num2)
                return -1;
            if (num1 > num2)
                return 1;
        }
        return 0;
    }
};