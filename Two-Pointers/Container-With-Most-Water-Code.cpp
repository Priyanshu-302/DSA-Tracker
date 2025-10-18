class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0, i = 0, j = height.size() - 1;
        while (i < j) {
            int breadth = j - i;
            int length = min(height[i], height[j]);
            int area = length * breadth;
            max_water = max(max_water, area);
            height[i] < height[j] ? i++ : j--;
        }

        return max_water;
    }
};
