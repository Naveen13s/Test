//LRU Cache
/* Design a data structure that follows the constraints of Least Recently Used (LRU) cache.
   Implement the LRUCache class:
   LRUCache(int capacity): We need to initialize the LRU cache with positive size capacity.
   int get(int key): Returns the value of the key if the key exists, otherwise return -1.
   void put(int key,int value): Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
   The functions get and put must each run in O(1) average time complexity.
   Note : In Input is provided in 2D array format where the first number in each array denotes the operation (1-put, 2-get) to perform. The next integers are the values used for the operation.
*/