//Insertion before the value X in LL
/*Given the head of a singly linked list and two integers X and val, insert a node with value val before the node with value X in the linked list and return the head of the modified list.

Examples:
Input: head -> 1 -> 2 -> 3, X = 2, val = 5
Output: head -> 1 -> 5 -> 2 -> 3
Explanation: The node with value 5 was added before the node with value 2

Input: head -> 1 -> 2 -> 3, X = 7, val = 5
Output: head -> 1 -> 2 -> 3
Explanation: No node was added as X was not found in the list.

Input: head -> 1, X = 1, val = 10
Output:head -> 10 -> 1
Constraints:
n == number of nodes in the Linked List
1 <= n <= 1000
0 <= ListNode.val <= 100
0 <= X <= 100
0 <= val <= 100
Number of nodes with value X is 0 or 1  */


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
    ListNode* insertBeforeX(ListNode* &head, int X, int val) {
        if (head == NULL) {
            return NULL;
        }
        if (head->val == X)
            return new ListNode(val, head);

        ListNode* temp = head;
        while (temp->next != NULL) {
            if (temp->next->val == X) {
                ListNode* newNode = new ListNode(val, temp->next);
                temp->next = newNode;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};
