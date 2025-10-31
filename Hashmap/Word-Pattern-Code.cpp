class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // extract the words from the string
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) return false;

        int n = pattern.size();
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        for (int i = 0; i < n; i++) {
            if (m1.find(pattern[i]) == m1.end()) {
                m1[pattern[i]] = words[i];
            }
            else {
                if (m1[pattern[i]] != words[i]) return false;
            }
            if (m2.find(words[i]) == m2.end()) {
                m2[words[i]] = pattern[i];
            }
            else {
                if (m2[words[i]] != pattern[i]) return false;
            }
        }

        return true;
    }
};
