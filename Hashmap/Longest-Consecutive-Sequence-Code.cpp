class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
 
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = nums[i];
            }
        }

        int length = 1;
        int longest = 1;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            auto nextIt = next(it);

            if (nextIt != mp.end()) {
                if (it->second + 1 == nextIt->second) length++;
                else {
                    longest = max(longest, length);
                    length = 1;
                } 
            }
        }

        longest = max(longest, length);
        return longest;
    }
};
