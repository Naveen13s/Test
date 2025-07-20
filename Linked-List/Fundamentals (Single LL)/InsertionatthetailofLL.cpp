//Insertion at the tail of LL
/*Given the head of a singly linked list and an integer X, insert a node with value X at the tail of the linked list and return the head of the modified list.
The tail is the last node of the linked list.

Examples:
Input: head -> 1 -> 2 -> 3, X = 7
Output: head -> 1 -> 2 -> 3 -> 7
Explanation: 7 was added as the last node.

Input: head, X = 0
Output: head -> 0
Explanation: 0 was added as the last/only node.
 
Input: head -> 5 -> 6, X = 8
Output: head -> 5 -> 6 -> 8
Constraints:
0 <= number of nodes in the Linked List <= 1000
0 <= ListNode.val <= 100
0 <= X <= 100    */
/*Definition of singly linked list:
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
    ListNode* insertAtTail(ListNode* &head, int X) {
        if (head == NULL)
            return new ListNode(X);

        ListNode* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        ListNode* newNode = new ListNode(X);
        temp->next = newNode;
        return head;
    }
};

