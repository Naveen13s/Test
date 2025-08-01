//Add two numbers in LL
/*Given two non-empty linked lists l1 and l2 which represent two non-negative integers.
The digits are stored in reverse order with each node storing one digit.
Add two numbers and return the sum as a linked list.
•	The sum Linked List will be in reverse order as well.
•	The Two given Linked Lists represent numbers without any leading zeros, except when the number is zero itself.

Examples:
Input: l1 = head -> 5 -> 4, l2 = head -> 4
Output: head -> 9 -> 4
Explanation: l1 = 45, l2 = 4.
l1 + l2 = 45 + 4 = 49.

Input: l1 = head -> 4 -> 5 -> 6, l2 = head -> 1 -> 2 -> 3
Output: head -> 5 -> 7 -> 9
Explanation: l1 = 654, l2 = 321.
l1 + l2 = 654 + 321 = 975.

Input: l1 = head -> 1, l2 = head -> 8 -> 7
Output:head -> 9 -> 7
Constraints:
•	1 <= Number of nodes in each Linked List <= 100
•	0 <= value of each node in both Linked List <= 9
•	It is guaranteed that the list represents a number that does not have leading zeros.

*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }


        return dummyHead->next;
    }
};
