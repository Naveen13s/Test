//Delete head of DLL
/*Given the head of a doubly linked list, remove the node at the head of the linked list and return the head of the modified list.
The head is the first node of the linked list.

Examples:
Input: head -> 1 <-> 2 <-> 3
Output: head -> 2 <-> 3
Explanation: The node with value 1 was removed.

Input: head -> 7
Output: headExplanation: Note that the head has null value after the removal.

Input: head -> 2 <-> 4

Output: head -> 4
Constraints:
n == Number of nodes in the linked list
1 <= n <= 100
0 <= ListNode.val <= 100   */

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

class Solution {
public:
    ListNode * deleteHead(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
            return nullptr;
        ListNode* prev = head;
        head = head->next;
        head->prev = nullptr;
        prev->next = nullptr;
        return head;          
    }
};


