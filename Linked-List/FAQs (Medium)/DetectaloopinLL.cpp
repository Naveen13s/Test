//Detect a loop in LL
/*
Given the head of a singly linked list. Return true if a loop exists in the linked list or return false.
A loop exists in a linked list if some node in the list can be reached again by continuously following the next pointer.
Internally, pos is used to denote the index(0-based) of the node from where the loop starts. Note that pos is not passed as a parameter.

Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5, pos = 1

Output: true
Explanation: The tail of the linked list connects to the node at 1st index.

Input: head -> 1 -> 3 -> 7 -> 4, pos = -1

Output: false
Explanation: No loop is present in the linked list.

Input: head -> 6 -> 3 -> 7, pos = 0
Output: true
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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;  
        std::unordered_map<ListNode*, int> nodeMap;
        while (temp != nullptr) {
            if (nodeMap.find(temp) != nodeMap.end()) {
                return true;
            }
            nodeMap[temp] = 1;
            temp = temp->next;  
        }
        return false;
    }
};