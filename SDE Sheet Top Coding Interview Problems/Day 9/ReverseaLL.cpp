//Reverse a LL
/* Given the head of a singly linked list. Reverse the given linked list and return the head of the modified list.
Example 1
Input: head -> 1 -> 2 -> 3 -> 4 -> 5
Output: head -> 5 -> 4 -> 3 -> 2 -> 1
Explanation: All the links are reversed and the head now points to the last node of the original list.  

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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* current=head;
        ListNode* prev=nullptr;
        while(current!=nullptr)
        {
            ListNode* temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }
};