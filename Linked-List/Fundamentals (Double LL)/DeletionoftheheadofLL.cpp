//Deletion of the head of LL
/*Given the head of a singly linked list, delete the head of the linked list and return the head of the modified list.
The head is the first node of the linked list.
Please note that this section might seem a bit difficult without prior knowledge on what linkedlist is, we will soon try to add basics concepts for your ease! If you know the concepts already please go ahead to give a shot to the problem. Cheers!

Examples:
Input: head -> 1 -> 2 -> 3
Output: head -> 2 -> 3
Explanation: The first node was removed.

Input: head -> 1
Output: head
Explanation: Note that the head of the linked list gets changed.

Input: head -> 7 -> 8
Output:
head -> 8
Constraints:
1 <= number of nodes in the Linked List <= 1000
0 <= ListNode.val <= 100   */


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

class Solution {
public:
    ListNode* deleteHead(ListNode* head) {
        if (head == nullptr) 
            return nullptr; 
        ListNode* temp = head;  
        head = head->next;    
        delete temp;        
        return head;           
    }
};

