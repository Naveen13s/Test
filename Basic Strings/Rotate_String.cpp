//Rotate String
/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.


Examples:
Input : s = "abcde" , goal = "cdeab"
Output : true

Explanation : After performing 2 shifts we can achieve the goal string from string s.
After first shift the string s is => bcdea
After second shift the string s is => cdeab.

Input : s = "abcde" , goal = "adeac"

Output : false

Explanation : Any number of shift operations cannot convert string s to string goal.*/

#include<bits/stdc++.h>
using namespace std;
class Solution{

  public:

    bool rotateString(string& s,string& goal){

      

      if(s.size()!=goal.size()) return false;

      int n=s.size();

      string shift=s;

      for(int i=0;i<n;i++){

        if(shift==goal) return true;

        shift=shift[n-1]+shift.substr(0,n-1);

      }

      return false;

    }

};