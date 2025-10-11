class RandomizedSet {
private:
    set<int> s;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (s.find(val) == s.end()) {
            s.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if (s.find(val) != s.end()) {
            s.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        vector<int> v(s.begin(), s.end());

        int randIdx = rand() % v.size();
        return v[randIdx];

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
