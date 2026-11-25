# Indexes of Subarray Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing only non-negative integers, find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value  **target** .

You need to return the  **1-based** indices of the leftmost and rightmost elements of this subarray.

- You need to find the first subarray whose sum is equal to the target.
- If no such array is possible then, return [-1].

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 7, 5], target = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.
```

```
Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 15
Output: [1, 5]
Explanation: The sum of elements from 1st to 5th position is 15.

```

```
Input: arr[] = [5, 3, 4], target = 2
Output: [-1]
Explanation: There is no subarray with sum 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T10:03:00.347Z  

```cpp

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {

        int n = arr.size();

        int left = 0;
        int sum = 0;

        for(int right = 0; right < n; right++)
        {
            sum = sum + arr[right];

            while(sum > target && left <= right)
            {
                sum = sum - arr[left];
                left++;
            }

            if(sum == target && left <= right)
            {
                return {left + 1, right + 1};
            }
        }

        return {-1};
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1)