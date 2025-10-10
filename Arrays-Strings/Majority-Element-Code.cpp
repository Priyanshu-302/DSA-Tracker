class Solution {
public:
    int majorityElement(vector<int>& nums) { 
        int n = nums.size();
        int cnt = 0, freq = 0;

        for (int num : nums) {
            if (cnt == 0) {
                freq = num;
            }
            if (num == freq) {
                cnt++;
            }
            else cnt--;
        }
        return freq;
    }
};
