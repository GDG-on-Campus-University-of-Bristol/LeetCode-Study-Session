class Node:
    def __init__(self, key, val):
        self.key = key
        self.val = val
        self.prev = None
        self.next = None

class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = {} # {key : Node}

        self.lru_dummy = Node(0,0)
        self.mru_dummy = Node(0,0)

        # LRU <--> Nodes <--> MRU
        # Double linked list, easier to insert and remove nodes
        self.lru_dummy.next = self.mru_dummy
        self.mru_dummy.prev = self.lru_dummy

    # helper function that insert the node in O(1)
    # inserting is always most recently used so insert as the 
    # prev of mru_dummy
    def insert(self, node):
        prev = self.mru_dummy.prev
        node.prev, node.next = prev, self.mru_dummy
        prev.next = node
        self.mru_dummy.prev = node
    
    # helper function that remove the node in O(1)
    def remove(self, node):
        left = node.prev
        right = node.next

        left.next = right
        right.prev = left

    def get(self, key: int) -> int:
        if not key in self.cache:
            return -1

        # we update the key as mru 
        self.remove(self.cache[key])
        self.insert(self.cache[key])
        return self.cache[key].val
        
    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self.remove(self.cache[key])

        self.cache[key] = Node(key, value)
        self.insert(self.cache[key])
        # pop the lru element 
        if self.capacity < len(self.cache):
            lru = self.lru_dummy.next
            self.remove(lru)
            self.cache.pop(lru.key)
        
# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)