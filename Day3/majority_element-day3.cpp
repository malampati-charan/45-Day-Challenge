#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;

        for (int num : nums) {
            umap[num]++;
        }

        // Now find the majority element
        for (auto mapElem : umap) {
            if (mapElem.second > nums.size() / 2) {
                return mapElem.first;
            }
        }

        return -1;
    }
};