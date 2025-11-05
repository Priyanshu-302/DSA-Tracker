class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        int n = strs.size();

        for (int i = 0; i < n; i++) {
            string word = strs[i];
            sort(word.begin(), word.end());
            anagrams[word].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto i : anagrams) {
            ans.push_back(i.second);
        }

        return ans;
    }
};
