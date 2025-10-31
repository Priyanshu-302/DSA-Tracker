class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if (n != t.size()) return false;
        unordered_map<char, int> m;

        for (int i = 0; i < n; i++) {
            m[s[i]]++;

            m[t[i]]--;
        }

        for (int i = 0; i < n; i++) {
            if (m[t[i]] != 0) return false;
        }

        return true;
    }
};
