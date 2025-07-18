//Deletion of the Kth element of LL
/*Given the head of a singly linked list and an integer k, delete the kth node of the linked list and return the head of the modified list.

Examples:
Input: head -> 3 -> 4 -> 5, k = 2
Output: head -> 3 -> 5
Explanation: The 2nd node with value 4 was removed.

Input: head -> 1 -> 2 -> 3, k = 1
Output: head -> 2 -> 3
Explanation: The 1st Node was removed, note that the value of the head has changed.

Input: head -> 7 -> 7 -> 7, k = 3
Output:
head -> 7 -> 7

Constraints:
n == number of nodes in the Linked list
1 <= n <= 1000
0 <= ListNode.val <= 100
1 <= k <= n    */

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
    ListNode* deleteKthNode(ListNode* &head, int k) {
        ListNode* temp = head;
        if( head==nullptr ) return nullptr;
        if(k==1){
            ListNode* h = head;
            head= head->next;
            delete h;
        }
        for( int i = 1 ; i <= k-2 ; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
}; 