//Insert before given node in DLL
/* Given a node's reference within a doubly linked list and an integer X, insert a node with value X before the given node in the linked list while preserving the list's integrity.
You will only be given the node's reference, not the head of the list. It is guaranteed that the given node will not be the head of the list.
Examples:
Input: head -> 1 <-> 2 <-> 6, node = 2, X = 7
Output: head -> 1 <-> 7 <-> 2 <-> 6
Explanation: Note that the head was not given to the function.

Input: head -> 7 <-> 5 <-> 5, node = 5 (node 3), X = 10
Output: head -> 7 <-> 5 <-> 10 <-> 5
Explanation: The last node with value 5 was referenced, thus the new node was added before the last node.

Input: head -> 7 <-> 6 <-> 5, node = 5, X = 10
Output:head -> 7 <-> 6 <-> 10 <-> 5
Constraints:
•	n == Number of nodes in the Linked List
•	2 <= n <= 100
•	0 <= ListNode.val <= 100
•	0 <= X <= 100
•	It is guaranteed the given node will be a part of a doubly linked list and will not be its head.

*/