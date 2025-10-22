class RecentCounter {
public:
    queue<int> queue;
    
    RecentCounter() {}
    
    int ping(int t) {
        while (!queue.empty() && queue.front() < t - 3000) {
            queue.pop();
        }
        
        queue.push(t);
        return queue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */