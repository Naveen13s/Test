//Reverse a LL
/*Given the head of a singly linked list. Reverse the given linked list and return the head of the modified list.

Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5
Output: head -> 5 -> 4 -> 3 -> 2 -> 1
Explanation: All the links are reversed and the head now points to the last node of the original list.

Input: head -> 6 -> 8
Output: head -> 8 -> 6
Explanation: All the links are reversed and the head now points to the last node of the original list.
This can be seen like: 6 <- 8 <- head.

Input: head -> 1
Output: head -> 1
Constraints:
0 <= number of nodes in the Linked List <= 105
0 <= ListNode.val <= 104   */

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

class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* current = head;

        ListNode* prev = nullptr;

        while (current != nullptr)

        {
            ListNode* temp = current->next;

            current->next = prev;

            prev = current;

            current = temp;
        }

        return prev;
    }
};

