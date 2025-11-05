class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int ,int> happy;

        while (n != 1) {
            if (happy[n] == 1) return false;
            happy[n] = 1;

            int sum = 0;
            while (n > 0) {
                int rem = n % 10;
                sum += pow(rem, 2);
                n /= 10;
            }
            n = sum;
        }

        return true;
    }
};
