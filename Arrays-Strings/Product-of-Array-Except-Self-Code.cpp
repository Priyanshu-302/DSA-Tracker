class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> answer(n, 1);
        int prefix = 1, suffix = 1;

        // prefix
        for (int i = 1; i < n; i++) {
            prefix *= nums[i - 1];
            answer[i] *= prefix;
        }

        // suffix
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            answer[i] *= suffix;
        }

        return answer;
    }
};
