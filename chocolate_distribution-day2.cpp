#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    // We should return the min difference given the value of m
        sort(a.begin(), a.end());
        
        long long minDiff = LLONG_MAX;
        
        for (int i = 0; i + m - 1 < n; i++) {
            long long currentDiff = a[i + m - 1] - a[i];
            if (currentDiff < minDiff) {
                minDiff = currentDiff;
            }
        }
        
        return minDiff;
    }   
};