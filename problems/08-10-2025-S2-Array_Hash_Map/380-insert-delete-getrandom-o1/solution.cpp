class RandomizedSet {
private:
    std::unordered_map<int, int> dict;
    std::vector<int> list;

public:
    // Constructor
    RandomizedSet() {
        // No need to initialize anything; STL containers do it automatically
    }

    // Inserts a value. Returns true if the value was not already present.
    bool insert(int val) {
        if (dict.count(val)) return false;

        dict[val] = list.size();
        list.push_back(val);
        return true;
    }

    // Removes a value. Returns true if the value was present.
    bool remove(int val) {
        if (!dict.count(val)) return false;

        int lastElement = list.back();
        int idx = dict[val];

        list[idx] = lastElement;
        dict[lastElement] = idx;

        list.pop_back();
        dict.erase(val);
        return true;
    }

    // Returns a random element from the set.
    int getRandom() {
        int randIndex = rand() % list.size();
        return list[randIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */