class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0, max_len = INT_MIN;
        unordered_set<char> st;

        if (s == "") return 0;

        while (r < n) {
            if (st.find(s[r]) == st.end()) {
                st.insert(s[r]);
                max_len = max(max_len, r - l + 1);
                r++;
            }
            else {
                st.erase(s[l]);
                l++;
            }
        }

        return max_len;
    }
};
