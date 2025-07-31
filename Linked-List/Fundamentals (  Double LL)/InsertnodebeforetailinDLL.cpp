//Insert node before tail in DLL
/*Given the head of a doubly linked list and an integer X, insert a node with value X before the tail of the linked list and return the head of the modified list.
Examples:
Input: head -> 1 <-> 2 <-> 4, X = 3
Output: head -> 1 <-> 2 <-> 3 <-> 4
Explanation: 3 was added before the last node.

Input: head -> 4, X = 6
Output: head -> 6 <-> 4
Explanation: 6 was added before 4, note that the head was changed as a result.

Input: head -> 4 <-> 5, X = 6
Output: head -> 4 <-> 6 <-> 5
Constraints:
n == Number of nodes in the Linked List
1 <= n <= 100
0 <= ListNode.val <= 100
0 <= X <= 100   */


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
    ListNode* insertBeforeTail(ListNode* head, int X) {
        if (head->next == nullptr) {
            ListNode* newHead = new ListNode(X, head, nullptr);
            head->prev = newHead;
            return newHead;
        }
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
        }
        ListNode* prev = tail->prev;
        ListNode* newNode = new ListNode(X, tail, prev);
        prev->next = newNode;
        tail->prev = newNode;
        return head;
    }
};

