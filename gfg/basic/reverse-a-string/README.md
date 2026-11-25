# Reverse a String

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a string  **s**, reverse the string.

 **Examples:** 

```
Input: s = "Geeks"
Output: "skeeG"

```

```
Input: s = "for"
Output: "rof"
```

```
Input: s = "a"
Output: "a"
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T10:11:22.493Z  

```cpp

class Solution {
  public:
    string reverseString(string& s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            swap(s[start], s[end]);

            start++;
            end--;
        }

        return s;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-a-string/1)