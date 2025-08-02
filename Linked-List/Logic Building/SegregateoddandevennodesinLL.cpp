//Segregate odd and even nodes in LL
/*Given the head of a singly linked list. Group all the nodes with odd indices followed by all the nodes with even indices and return the reordered list.
Consider the 1st node to have index 1 and so on. The relative order of the elements inside the odd and even group must remain the same as the given input.
Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5
Output: head -> 1 -> 3 -> 5 -> 2 -> 4
Explanation: The nodes with odd indices are 1, 3, 5 and the ones with even indices are 2, 4.

Input: head -> 4 -> 3 -> 2 -> 1
Output: head -> 4 -> 2 -> 3 -> 1
Explanation: The nodes with odd indices are 4, 2 and the ones with even indices are 3, 1.

Input: head -> 1
Output:head -> 1
Constraints:
•	0 <= number of nodes in the Linked List <= 105
•	0 <= ListNode.val <= 104

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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> array;   
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            array.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp != NULL)
            array.push_back(temp->val);
        temp = head->next;
        while (temp != NULL && temp->next != NULL) {
            array.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp != NULL)
            array.push_back(temp->val);
        temp = head;
        int i = 0;
        while (temp != NULL) {
            temp->val = array[i];
            temp = temp->next;
            i++;
        }

        return head;
    }
};