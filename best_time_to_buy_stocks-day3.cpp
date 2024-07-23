#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0; 
            //early exit, saves some cases
        }

        int maxProfit = 0;
        int left = 0; 
        int right = 0; 

        while (right < prices.size()) {
            if (prices[right] > prices[left]) { //profit exists
                maxProfit = max(maxProfit, prices[right] - prices[left]);
            } else { //if no profit, move the right pointer after updating the left
                left = right;
            }
            right++; 
        }

        return maxProfit;
    }

};