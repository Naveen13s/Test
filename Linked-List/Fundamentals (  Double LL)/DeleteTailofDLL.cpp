//Delete Tail of DLL
/*Given the head of a doubly linked list, remove the node at the tail of the linked list and return the head of the modified list.
The tail is the last node of the linked list.

Examples:
Input: head -> 1 <-> 2 <-> 3
Output: head -> 1 <-> 2
Explanation: The node with value 3 was removed.

Input: head -> 7
Output: head
Explanation: Note that the head has null value after the removal.

Input: head -> 2 <-> 4
Output: head -> 2
Constraints:
n == Number of nodes in the linked list
1 <= n <= 100
0 <= ListNode.val <= 100    */


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
    ListNode* deleteTail(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;  
        }
        ListNode* tail = head;
        while (tail->next != nullptr) 
            tail = tail->next;
        ListNode* newTail = tail->prev;
        newTail->next = nullptr;
        tail->prev = nullptr;
        delete tail;  
        
        return head; 
    }
};