//Remove Nth node from the back of the LL
/*
Given the head of a singly linked list and an integer n. Remove the nth node from the back of the linked List and return the head of the modified list. The value of n will always be less than or equal to the number of nodes in the linked list.
Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5, n = 2
Output: head -> 1 -> 2 -> 3 -> 5
Explanation: The 2nd node from the back was the node with value 4.

Input: head -> 5 -> 4 -> 3 -> 2 -> 1, n = 5
Output: head -> 4 -> 3 -> 2 -> 1
Explanation: The 5th node from the back is the first node.

Input: head -> 9 -> 8 -> 7, n = 1
Output: head -> 9 -> 8
Constraints:
1 <= number of nodes in the Linked List <= 105
0 <= ListNode.val <= 104
1 <= n <= number of nodes in the Linked List.
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
    //Function to remove the nth node from end
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }
        int cnt = 0;
        ListNode* temp = head;

        // Count the number of nodes 
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        /*If N equals 
        the total number of nodes
        delete the head*/
        if (cnt == n) {
            ListNode* newhead = head->next;
            delete (head);
            return newhead;
        }

       /* Calculate the position 
        of the node to delete (res)*/
        int res = cnt - n;
        temp = head;

        /*Traverse to the node 
        just before the one to delete*/
        while (temp != NULL) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }

        //Delete the Nth node from the end
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete (delNode);
        return head;
    }
};
