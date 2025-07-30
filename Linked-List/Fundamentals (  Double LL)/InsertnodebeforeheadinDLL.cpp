//Insert node before head in DLL
/*Given the head of a doubly linked list and an integer X, insert a node with value X before the head of the linked list and return the head of the modified list.

Examples:
Input: head -> 1 <-> 2 <-> 3, X = 3
Output: head -> 3 <-> 1 <-> 2 <-> 3
Explanation: 3 was added before the 1st node. Note that the head's value is changed.

Input: head -> 5, X = 7
Output: head -> 7 <-> 5

Input: head -> 2 <-> 3, X = 10
Output: head -> 10 <-> 2 <-> 3
Constraints:
n == Number of nodes in the Linked List
1 <= n <= 100
0 <= ListNode.val <= 100
0 <= X <= 100     */

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
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* newHead = new ListNode(X, head, nullptr);
        head->prev = newHead;
        return newHead; 
    }
};