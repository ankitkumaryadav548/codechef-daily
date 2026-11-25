
class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int n = arr.size();

        int total = 0;
        int maxSum = arr[0];
        int minSum = arr[0];

        int currMax = 0;
        int currMin = 0;

        for (int i = 0; i < n; i++) {
            total += arr[i];

            currMax = max(arr[i], currMax + arr[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(arr[i], currMin + arr[i]);
            minSum = min(minSum, currMin);
        }

        // All elements are negative
        if (maxSum < 0) {
            return maxSum;
        }

        int circularSum = total - minSum;

        return max(maxSum, circularSum);
    }
};
