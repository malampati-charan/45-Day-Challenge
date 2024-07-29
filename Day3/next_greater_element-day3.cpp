#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        unordered_map<int, int> nextGreaterMap;

        // Fill the map with the next greater elements
        for (int num : nums2) {
            while (!stk.empty() && num > stk.top()) {
                nextGreaterMap[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }

        // For elements still in the stack, there is no greater element
        while (!stk.empty()) {
            nextGreaterMap[stk.top()] = -1;
            stk.pop();
        }

        // Build the result for nums1 using the map
        vector<int> returnable;
        for (int num : nums1) {
            returnable.push_back(nextGreaterMap[num]);
        }

        return returnable;
    }
};