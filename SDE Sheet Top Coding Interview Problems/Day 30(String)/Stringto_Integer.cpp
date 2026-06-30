//String to Integer (atoi)
/* Implement the function myAtoi(s) which converts the given string s to a 32-bit signed integer (similar to the C/C++ atoi function).
   Steps to Implement:
    First, ignore any leading whitespace characters ' ' until the first non-whitespace character is found.
    Check the next character to determine the sign. If it’s a '-', the number should be negative. If it’s a '+', the number should be positive. If neither is found, assume the number is positive.
    Read the digits and convert them into a number. Stop reading once a non-digit character is encountered or the end of the string is reached. Leading zeros should be ignored during conversion.
    The result should be clamped within the 32-bit signed integer range: [-2147483648, 2147483647]. If the computed number is outside this range, return -2147483648 if the number is less than -2147483648, or return 2147483647 if the number is greater than 2147483647.
    Finally, return the computed number after applying all the above steps.
*/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long res = 0; 
        while (i < s.size() && s[i] == ' ') i++;
        if (i == s.size()) return 0;
        if (s[i] == '-') { sign = -1; i++; }
        else if (s[i] == '+') i++;
        while (i < s.size() && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');
            if (sign * res > INT_MAX) return INT_MAX;
            if (sign * res < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * res);
    }
};