# Largest in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array  **arr[].**  The task is to find the largest element and return it.

 **Examples:** 

```
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
```

```
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
```

```
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T10:09:10.745Z  

```cpp

class Solution {
public:
    int largest(vector<int> &arr) {

        int maxi = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }

        return maxi;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1)