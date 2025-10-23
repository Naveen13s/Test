//Divide two numbers without multiplication and division
/*Given the two integers, dividend and divisor. Divide without using the mod, division, or multiplication operators and return the quotient.
The fractional portion of the integer division should be lost as it truncates toward zero.
As an illustration, 8.345 and -2.7335 would be reduced to 8 and -2 respectively.
Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1]. For this problem, if the quotient is strictly greater than 231 - 1, then return 231 - 1, and if the quotient is strictly less than -231, then return -231.
Examples:
Input : Dividend = 10 , Divisor = 3
Output : 3
Explanation : 10/3 = 3.33 , truncated to 3.
Input : Dividend = 7 , Divisor = -3
Output : -2
Explanation : 7/-3 = -2.33 , truncated to -2.
Input : Dividend = 7 , Divisor = 2
Output:3
Constraints:
•	-231 <= dividend , divisor <= 231 - 1
•	divisor != 0

*/