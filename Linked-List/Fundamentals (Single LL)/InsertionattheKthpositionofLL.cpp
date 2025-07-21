//Insertion at the Kth position of LL
/*Given the head of a singly linked list and two integers X and K, insert a node with value X as the kth node of the linked list and return the head of the modified list.

Examples:
Input: head -> 1 -> 2 -> 3, X = 5, K = 2
Output: head -> 1 -> 5 -> 2 -> 3

Input: head, X = 7, K = 1
Output: head -> 7
Explanation: Note that the value of the head was changed.

Input: head -> 1 -> 2, X = 15, K = 3
Output:
head -> 1 -> 2 -> 15
Constraints:
n == number of nodes in the Linked List
0 <= n <= 1000
0 <= ListNode.val <= 100
0 <= X <= 100
1 <= K <= n+1     */

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
    ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
        if (head == NULL) {
            if (K == 1)
                return new ListNode(X);
            else
                return head;
        }
        if (K == 1)
            return new ListNode(X, head);
    
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            if (cnt == K-1) {
                ListNode* newNode = new ListNode(X, temp->next);
                temp->next = newNode;
                break;
            }
            temp = temp->next;
        }
    
        return head;
    }
};