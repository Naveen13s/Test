//Deletion of the tail of LL
/*Given the head of a singly linked list, delete the tail of the linked list and return the head of the modified list.
The tail is the last node of the linked list.

Examples:
Input: head -> 1 -> 2 -> 3
Output: head -> 1 -> 2
Explanation: The last node was removed.

Input: head -> 1
Output: head
Explanation: Note that the value of head is null here.

Input: head -> 7 -> 8
Output: head -> 7
Constraints:
1 <= number of nodes in the Linked List <= 1000
0 <= ListNode.val <= 100     */


/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
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
    ListNode* deleteTail(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return NULL; 
        ListNode* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
};