class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 2;
        int n = nums.size();

        if (nums.size() <= 2) {
            return n;
        }

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[idx - 2]) {
                nums[idx++] = nums[i];
            }
        }

        return idx;
    }
};
