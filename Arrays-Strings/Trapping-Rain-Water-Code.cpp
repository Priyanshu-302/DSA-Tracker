class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int l_max = 0;
        int r_max = 0;
        int l = 0;
        int r = n - 1;
        int total_water = 0;
        while (l < r) {
            if (height[l] < height[r]) {
                if (l_max < height[l]) {
                    l_max = height[l];
                    l++;
                }
                else {
                    total_water += l_max - height[l];
                    l++;
                }
            }
            else {
                if (r_max < height[r]) {
                    r_max = height[r];
                    r--;
                }
                else {
                    total_water += r_max - height[r];
                    r--;
                }
            }
        }

        return total_water;
    }
};
