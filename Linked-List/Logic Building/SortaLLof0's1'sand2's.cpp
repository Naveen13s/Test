//Sort a LL of 0's 1's and 2's
/*Given the head of a singly linked list consisting of only 0, 1 or 2. Sort the given linked list and return the head of the modified list. Do it in-place by changing the links between the nodes without creating new nodes.

Examples:
Input: head -> 1 -> 0 -> 2 -> 0 -> 1
Output: head -> 0 -> 0 -> 1 -> 1 -> 2
Explanation: The values after sorting are [0, 0, 1, 1, 2].

Input: head -> 1 -> 1 -> 1 -> 0
Output: head -> 0 -> 1 -> 1 -> 1
Explanation: The values after sorting are [0, 1, 1, 1].

Input: head -> 2 -> 2 -> 1 -> 2
Output: head -> 1 -> 2 -> 2 -> 2
Constraints:
0 <= number of nodes in the Linked List <= 105
0 <= ListNode.val <= 2   

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

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        int c0 = 0, c1 = 0, c2 = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            if (temp->val == 0)
                c0++;
            else if (temp->val == 1)
                c1++;
            else if (temp->val == 2)
                c2++;
            temp = temp->next;
        }

        temp = head;
        while (temp != NULL) {
            if (c0 > 0) {
                temp->val = 0;
                c0--;
            } else if (c1 > 0) {
                temp->val = 1;
                c1--;
            } else if (c2 > 0) {
                temp->val = 2;
                c2--;
            }
            temp = temp->next;
        }

        return head;
    }
};
