class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long int n = nums.size();
    std::vector<long long int> left(n), right(n), P(n);
    
    // Compute left array
    left[0] = 1;
    for (int i = 1; i < n; ++i) {
        left[i] = left[i - 1] * nums[i - 1];
    }
    
    // Compute right array
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; --i) {
        right[i] = right[i + 1] * nums[i + 1];
    }
    
    // Compute product array
    for (int i = 0; i < n; ++i) {
        P[i] = left[i] * right[i];
    }
    
    return P;
    }
};