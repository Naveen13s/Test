//Check if LL is palindrome or not
/*
Given the head of a singly linked list representing a positive integer number. Each node of the linked list represents a digit of the number, with the 1st node containing the leftmost digit of the number and so on. Check whether the linked list values form a palindrome or not. Return true if it forms a palindrome, otherwise, return false.
A palindrome is a sequence that reads the same forward and backwards.
Examples:
Input: head -> 3 -> 7 -> 5 -> 7 -> 3
Output: true
Explanation: 37573 is a palindrome.

Input: head -> 1 -> 1 -> 2 -> 1
Output: false
Explanation: 1121 is not a palindrome.

Input: head -> 9 -> 9 -> 9 -> 9
Output: true
Constraints:
1 <= number of nodes in the Linked List <= 105
0 <= ListNode.val <= 9
The number represented does not contain any leading zeroes.
*/

/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while (temp != NULL) {
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL) {
            if (temp->val != st.top()) {
                return false;
            }
            st.pop();
            temp = temp->next;
        }
        return true;
    }
};
