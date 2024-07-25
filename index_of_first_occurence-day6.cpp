#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //find the first occurence of the string needle in the string haystack
        //let's use the sliding window problem
        if (needle.size() > haystack.size()) return -1;
        int left = 0, right = needle.size() - 1;

        for(int i = 0; i < haystack.size(); i++) {

            while (left <= right && right < haystack.size()) {

                string str = "";
                for(int j = left; j <= right; j++) {
                    str += haystack[j];
                }
                if (str == needle) return left;
                left++; right++;

            }

        }
        return -1;

    }
};