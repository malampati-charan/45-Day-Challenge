#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = "";
        auto i = 0;
        for(auto it : strs[0]){

            for(auto it2 : strs){
                if(it2[i] != it){
                    return result;
                }
            }
            result = result + it;
            ++i;

        }
        return result;

    }
};