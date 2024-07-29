#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //let's use the dutch national flag method
        int r = 0, w = 0, b = nums.size() - 1;

        while (w <= b) {
            if (nums[w] == 0)
                swap(nums[r++], nums[w++]);
            else if (nums[w] == 1)
                w++;
            else 
                swap(nums[w], nums[b--]);
        }
    }
};