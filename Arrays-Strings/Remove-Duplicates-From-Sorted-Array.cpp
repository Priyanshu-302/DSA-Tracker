class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0;

        nums[idx++] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue;
            else {
                nums[idx++] = nums[i];
            }
        }

        return idx;
    }
};
