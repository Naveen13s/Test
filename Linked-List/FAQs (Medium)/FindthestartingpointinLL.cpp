//Find the starting point in LL
/* 
Given the head of a singly linked list, the task is to find the starting point of a loop in the linked list if it exists. Return the starting node if a loop exists; otherwise, return null.
A loop exists in a linked list if some node in the list can be reached again by continuously following the next pointer. Internally, pos denotes the index (0-based) of the node from where the loop starts.
Note that pos is not passed as a parameter.

Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5, pos = 1
Output(value of the returned node is displayed): 2
Expla﻿nation: The tail of the linked list connects to the node at 1st index.

Input: head -> 1 -> 3 -> 7 -> 4, pos = -1
Output(value of the returned node is displayed): null
Explanation: No loop is present in the linked list.

Input: head -> 6 -> 3 -> 7, pos = 0
Output: 6
Constraints:
0 <= number of nodes in the cycle <= 105
0 <= ListNode.val <= 104
pos is -1 or a valid index in the linked list

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
    ListNode *findStartingPoint(ListNode *head) {
        ListNode* temp = head;
        std::unordered_map<ListNode*, int> mp;
        while(temp != nullptr) {
            if(mp.count(temp) != 0) {
                return temp;
            }
            mp[temp] = 1;
            temp = temp->next;
        }
        return nullptr;
    }
};