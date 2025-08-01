//Insert node before (kth node) in DLL
/*Given the head of a doubly linked list and two integers X and K, insert a new node with value X, before the Kth node of the linked list and return the head of the modified linked list.
Examples:
Input: head -> 1 <-> 3 <-> 5, X = 7, K = 2
Output: head -> 1 <-> 7 <-> 3 <-> 5
Explanation: A node with value 7 was added before the 2nd node.

Input: head -> 5, X = 7, K = 1
Output: head -> 7 <-> 5
Explanation: A node with value 7 was added, note that the head was changed.

Input: head -> 4 <-> 5, X = 10, K = 2
Output:head -> 4 <-> 10 <-> 5
Constraints:
•	n == Number of nodes in the linked list
•	1 <= n <= 100
•	0 <= ListNode.val <= 100
•	0 <= X <= 100
•	1 <= K <= n

*/
