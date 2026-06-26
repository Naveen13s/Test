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

struct Node {
  int key;
  int value;
  int freq;
  list<int>::const_iterator it;
};

class LFUCache {
 public:
  LFUCache(int capacity) : capacity(capacity), minFreq(0) {}

  int get(int key) {
    if (!keyToNode.count(key))
      return -1;

    Node& node = keyToNode[key];
    touch(node);
    return node.value;
  }

  void put(int key, int value) {
    if (capacity == 0)
      return;
    if (keyToNode.count(key)) {
      Node& node = keyToNode[key];
      node.value = value;
      touch(node);
      return;
    }

    if (keyToNode.size() == capacity) {
      const int keyToEvict = freqToList[minFreq].back();
      freqToList[minFreq].pop_back();
      keyToNode.erase(keyToEvict);
    }

    minFreq = 1;
    freqToList[1].push_front(key);
    keyToNode[key] = {key, value, 1, cbegin(freqToList[1])};
  }

 private:
  int capacity;
  int minFreq;
  unordered_map<int, Node> keyToNode;
  unordered_map<int, list<int>> freqToList;

  void touch(Node& node) {
    const int prevFreq = node.freq;
    const int newFreq = ++node.freq;
    freqToList[prevFreq].erase(node.it);
    if (freqToList[prevFreq].empty()) {
      freqToList.erase(prevFreq);
      if (prevFreq == minFreq)
        ++minFreq;
    }
    freqToList[newFreq].push_front(node.key);
    node.it = cbegin(freqToList[newFreq]);
  }
};