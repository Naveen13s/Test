//Delete Kth Element of DLL
/*Given the head of a doubly linked list and an integer k, remove the node at the kth position of the linked list and return the head of the modified list.

Examples:
Input: head -> 2 <-> 5 <-> 7 <-> 9, k = 2
Output: head -> 2 <-> 7 <-> 9
Explanation: The node with value 5 was removed.

Input: head -> 2 <-> 5 <-> 7, k = 1
Output: head -> 5 <-> 7
Explanation: The node with value 2 was removed, note that the head was modified.

Input: head -> 2 <-> 5 <-> 7, k = 3
Output: head -> 2 <-> 5
Constraints:
n == Number of nodes in the linked list
1 <= n <= 100
0 <= ListNode.val <= 100
1 <= k <= n   */


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
    ListNode* deleteKthElement(ListNode* head, int k) {
        if (head == nullptr) 
            return nullptr;
    
        int count = 0;
        ListNode* kNode = head;
        while (kNode != nullptr) {
            count++;
            if (count == k) break;
            kNode = kNode->next;
        }
        if (kNode == nullptr) return head; 
        ListNode* prev = kNode->prev;
        ListNode* front = kNode->next;
        if (prev == nullptr && front == nullptr) {
            delete kNode;
            return nullptr;
        }
        else if (prev == nullptr) {
            head = front;
            front->prev = nullptr;
        }
        else if (front == nullptr) {
            prev->next = nullptr;
        }
        else {
            prev->next = front;
            front->prev = prev;
        }
        delete kNode;
        return head;
    }
};



