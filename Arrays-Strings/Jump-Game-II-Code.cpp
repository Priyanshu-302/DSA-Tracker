class Solution {
public:
    int jump(vector<int>& arr) {
        int maxReach = 0, n = arr.size(), newReach = 0, jumps = 0;

        for (int i = 0; i < n - 1; i++) {
            maxReach = max(maxReach, i + arr[i]);

            if (i == newReach) {
                jumps++;
                newReach = maxReach;

                if (newReach >= n - 1) break;
            }
        }

        return jumps;
    }
};
