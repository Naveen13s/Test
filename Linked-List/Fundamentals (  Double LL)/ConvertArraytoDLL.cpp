//Convert Array to DLL
/* Given an array nums, convert it into a doubly linked list and return the head of the list.

Examples:
Input: nums = [1, 2, 3, 4]
Output: head -> 1 <-> 2 <-> 3 <-> 4

Input: nums = [7, 7]
Output: head -> 7 <-> 7

Input: nums = [3]
Output: head -> 3
Constraints:
n == nums.length
0 <= n <= 100
0 <= nums[i] <= 100   */


/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* arrayToLinkedList(vector<int> &nums) {
        if (nums.empty()) return nullptr; 
        ListNode* head = new ListNode(nums[0]);
        ListNode* prev = head;             

        for (int i=1; i < nums.size(); i++) {
            ListNode* temp = new ListNode(nums[i], nullptr, prev);
            prev->next = temp; 
            prev = temp;         
        }
        return head;  
    }
};



