class RandomizedSet:

    def __init__(self):
        self.arr = []
        self.pos = {} # val -> index
        self.len = 0

    def insert(self, val: int) -> bool:
        if val in self.pos:
            return False
        
        self.pos[val] = self.len
        self.arr.append(val)
        self.len += 1 
        return True

    def remove(self, val: int) -> bool:
        if val not in self.pos:
            return False
        
        i = self.pos[val]
        last = self.arr[-1]

        self.arr[i] = last
        self.pos[last] = i

        self.arr.pop()
        self.pos.pop(val)

        self.len -= 1
        return True

    def getRandom(self) -> int:
        return random.choice(self.arr)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()