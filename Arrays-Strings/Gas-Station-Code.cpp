class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int total_gas = 0, curr_gas = 0, total_cost = 0, start = 0;

        // step 1: calculate the sum of total gas and total cost
        for (int i = 0; i < n; i++) {
            total_gas += gas[i];
            total_cost += cost[i];
        }

        if (total_gas < total_cost) return -1;

        // step 2: find the start if curr_gas is positive
        for (int i = 0; i <n ; i++) {
            curr_gas += gas[i] - cost[i];

            if (curr_gas < 0) {
                start = i + 1;
                curr_gas = 0;
            }
        } 

        return start;
    }
};
