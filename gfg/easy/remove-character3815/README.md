# Remove Characters Present in  Other

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings  **s1** and  **s2**, remove every character from s1 that is present in s2. Return the resulting string. Both strings contain only lowercase English letters, and |s1| > |s2|.

 **Examples:** 

```
Input: s1 = "computer", s2 = "cat"
Output: "ompuer"
Explanation: After removing characters(c, a, t) from string1 we get "ompuer".
```

```
Input: s1 = "occurrence", s2  = "car"
Output: "ouene"
Explanation: After removing characters (c, a, r) from string1 we get "ouene".
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-23T11:15:26.137Z  

```cpp

// class Solution {
//   public:
//     string removeChars(string &s1, string &s2) {

//         int n1 = s1.size();
//         int n2 = s2.size();

//         string ans = "";

//         for(int i = 0; i < n1; i++) {

//             bool found = false;

//             for(int j = 0; j < n2; j++) {

//                 if(s1[i] == s2[j]) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(found == false) {
//                 ans += s1[i];
//             }
//         }

//         return ans;
//     }
// };



class Solution {
  public:
    string removeChars(string s1, string s2) {

        int freq[26] = {0};

        // Mark characters present in s2
        for(int i = 0; i < s2.length(); i++) {
            freq[s2[i] - 'a'] = 1;
        }

        string ans = "";

        // Check every character of s1
        for(int i = 0; i < s1.length(); i++) {

            if(freq[s1[i] - 'a'] == 0) {
                ans += s1[i];
            }
        }

        return ans;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/remove-character3815/1)