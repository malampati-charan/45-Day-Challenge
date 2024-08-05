class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // The integers are in the range of 1 to n, where n is the size of the array
        // Integers appear once or twice, return the once which appear twice
        vector<int> returnable;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;

            if (nums[index] < 0) {
                returnable.push_back(abs(nums[i]));
            } else {
                nums[index] = -nums[index];
            }
        }

        return returnable;
    }
};