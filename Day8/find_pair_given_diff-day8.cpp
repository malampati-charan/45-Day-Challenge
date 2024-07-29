class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // Let's use the two pointer method. First sort the array
        sort(arr.begin(), arr.end());
        
        int left = 0;
        int right = left + 1;
        while (left < n && right < n) {
            if (left != right && arr[right] - arr[left] == x) {
                return 1;
            } else if (arr[right] - arr[left] < x) {
                right++;
            } else {
                left++;
            }
        }
        
        return -1;
    }
};