//Traversal in Linked List
/*Given the head of a singly Linked List. Traverse the entire Linked List and return its elements in an array in the order of their appearance.

Examples:
Input: head -> 5 -> 4 -> 3 -> 1 -> 0
Output: [5, 4, 3, 1, 0]
Explanation: The nodes in the Linked List are 5 -> 4 -> 3 -> 1 -> 0, with the head pointing to node with value 5.

Input: head -> 1
Output: [1]
Explanation: Only one node present in the list.

Input: head -> 0 -> 2 -> 5
Output: [0, 2, 5]
Constraints:
0 <= number of nodes in the Linked List <= 105
0 <= ListNode.val <= 104  */

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
    vector<int> LLTraversal(ListNode *head) {
        ListNode* temp = head;
        vector<int> ans;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        return ans;
    }
};
