//Add one to a number represented by LL
/* Given the head of a singly linked list representing a positive integer number. Each node of the linked list represents a digit of the number, with the 1st node containing the leftmost digit of the number and so on. The task is to add one to the value represented by the linked list and return the head of a linked list containing the final value.
The number will contain no leading zeroes except when the value represented is zero itself.

Examples:
Input: head -> 1 -> 2 -> 3
Output: head -> 1 -> 2 -> 4
Explanation: The number represented by the linked list = 123.
123 + 1 = 124.

Input: head -> 9 -> 9
Output: head -> 1 -> 0 -> 0
Explanation: The number represented by the linked list = 99.
99 + 1 = 100.

*/

/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
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
    ListNode* reverse_list(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* addOne(ListNode* head) {
        ListNode* newHead = reverse_list(head);
        int carry = 0;
        ListNode* p = newHead;
        ListNode* q = NULL;
        while (p) {
            if (p->val < 9) {
                p->val += 1;
                carry = 0;
                break;

            }

            else {
                carry = 1;
                p->val = 0;
            }

            q = p;
            p = p->next;
        }

        if (carry) {
            ListNode* newNode = new ListNode(1);
            q->next = newNode;
        }

        head = reverse_list(newHead);
        return head;
    }
};