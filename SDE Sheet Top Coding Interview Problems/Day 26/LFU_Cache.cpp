//LFU Cache
/* Design and implement a data structure for a Least Frequently Used (LFU) cache.
   Implement the LFUCache class with the following functions:
   LFUCache(int capacity): Initialize the object with the specified capacity.
   int get(int key): Retrieve the value of the key if it exists in the cache; otherwise, return -1.
   void put(int key, int value): Update the value of the key if it is present in the cache, or insert the key if it is not already present. If the cache has reached its capacity, invalidate and remove the least frequently used key before inserting a new item. In case of a tie (i.e., two or more keys with the same frequency), invalidate the least recently used key.
   A use counter is maintained for each key in the cache to determine the least frequently used key. The key with the smallest use counter is considered the least frequently used.
   When a key is first inserted into the cache, its use counter is set to 1 due to the put operation. The use counter for a key in the cache is incremented whenever a get or put operation is called on it.
   Ensure that the functions get and put run in O(1) average time complexity.
*/