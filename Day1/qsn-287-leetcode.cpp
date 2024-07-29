#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Use the floyd's tortoise and hare algorithm for finding cycles 

        // Detect the cycle first
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        } while (hare != tortoise);

        // Now find the entry point of the cycle, move one step at a time, set the tortoise to the start of the cycle
        tortoise = nums[0];
        while (tortoise != hare) {
            hare = nums[hare];
            tortoise = nums[tortoise];
        }

        return hare;
    }
};