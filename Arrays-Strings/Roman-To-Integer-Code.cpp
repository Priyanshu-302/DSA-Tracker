class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();

        unordered_map<char, int> romanToInteger = {
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;
        for (int i = 0; i < n; i++) {
            if (romanToInteger[s[i]] < romanToInteger[s[i + 1]]) {
                total -= romanToInteger[s[i]];
            } else {
                total += romanToInteger[s[i]];
            }
        }

        return total;
    }
};
