class Solution {
private:
    string common(string a, string b) {
        int n = min(a.size(), b.size());

        string res;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                res += a[i];
            }
            else break;
        }
        return res;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        string prefix = strs[0];
        for (int i = 1; i < n; i++) {
            prefix = common(prefix, strs[i]);
            if (prefix == "") break;
        }

        return prefix;
    }
};
