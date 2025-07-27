//Removing given node in DLL
/* Given a node's reference within a doubly linked list, remove that node from the linked list while preserving the list's integrity.
You will only be given the node's reference, not the head of the list. It is guaranteed that the given node will not be the head of the list. For the custom testcase, give the index(0-indexed) of the node to be removed.

Examples:
Input: head -> 1 <-> 3 <-> 5, node = 3
Output: head -> 1 <-> 5
Explanation: The referenced node with value 3 was removed.

Input: head -> 1 <-> 3 <-> 7, node = 7
Output: head -> 1 <-> 3
Explanation: The referenced node with value 7 was removed.

Input: head -> 1 <-> 5, node = 5
Output: head -> 1
Constraints:
2 <= Number of nodes in the list <= 100
0 <= ListNode.val <= 100
Node is guaranteed to be a part of the linked list and will not be the head
*/

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
    void deleteGivenNode(ListNode* node) {
        ListNode* prev = node->prev;
        ListNode* front = node->next;
        if (front == nullptr) {
            prev->next = nullptr;
            node->prev = nullptr;
            delete node;
            return;
        }
        prev->next = front;
        front->prev = prev;
        node->next = nullptr;
        node->prev = nullptr;
        delete node;
    }
};