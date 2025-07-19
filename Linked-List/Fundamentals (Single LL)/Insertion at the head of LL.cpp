//Insertion at the head of LL
/* Given the head of a singly linked list and an integer X, insert a node with value X at the head of the linked list and return the head of the modified list.
The head is the first node of the linked list.
Examples:
Input: head -> 1 -> 2 -> 3, X = 7
Output: head -> 7 -> 1 -> 2 -> 3
Explanation: 7 was added as the 1st node.

Input: head, X = 7
Output: head -> 7
Explanation: 7 was added as the 1st node.

Input: head -> 1 -> 3, X = 4
Output: head -> 4 -> 1 -> 3
Constraints:
0 <= number of nodes in the Linked List <= 1000
0 <= ListNode.val <= 100
0 <= X <= 100 */

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
    ListNode* insertAtHead(ListNode* head, int X) {
        ListNode* newnode = new ListNode(X);
        newnode->next = head;
        head = newnode;
        return head;
    }
};