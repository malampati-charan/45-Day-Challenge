class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int j = 1;

        sort(arr, arr + n);
        
        for (int i = 0; i < n; i++) {
            if (arr[i] < j) {
                continue;
            }

            if (arr[i] == j) {
                j++;
            }
        }

        return j;
    } 
};