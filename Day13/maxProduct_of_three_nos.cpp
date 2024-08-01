class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // Find max 3 and min 2 in O(n)
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int n : nums) {
            if (n > max1) {
                max3 = max2;
                max2 = max1;
                max1 = n;
            } else if (n > max2) {
                max3 = max2;
                max2 = n;
            } else if (n > max3) {
                max3 = n;
            }

            if (n < min1) {
                min2 = min1;
                min1 = n;
            } else if (n < min2) {
                min2 = n;
            }
        }

        int m1 = max1 * max2 * max3;
        int m2 = max1 * min1 * min2;

        return max(m1, m2);
    }
};