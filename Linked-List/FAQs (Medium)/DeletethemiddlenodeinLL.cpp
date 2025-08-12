//Delete the middle node in LL
/*
Given the head of a non-empty singly linked list containing integers, delete the middle node of the linked list. Return the head of the modified linked list.

The middle node of a linked list of size n is the (⌊n / 2⌋ + 1)th node from the start using 1-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.
Examples:
Input: head -> 1 -> 2 -> 3 -> 4 -> 5
Output: head -> 1 -> 2 -> 4 -> 5
Explanation: n = 5.
⌊n / 2⌋ + 1 = 3, therefore middle node has index 3 and so the node with value 3 was deleted.
Input: head -> 7 -> 6 -> 5 -> 4
Output: head -> 7 -> 6 -> 4
Explanation: n = 4.
⌊n / 2⌋ + 1 = 3, therefore middle node has index 3 and so the node with value 5 was deleted.
Input: head -> 7
Output:head
Constraints:
•	1 <= number of nodes in the Linked List <= 105
•	0 <= ListNode.val <= 104


*/