class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int output = 0;
        for (int cost : costs) {
            if (cost > coins)
                break;

            coins -= cost;
            output++;
        }
        return output;
    }
};
