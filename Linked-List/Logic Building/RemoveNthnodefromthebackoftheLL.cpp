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
