# FLOW007 - Rating 420

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Reverse The Number

Given an Integer  **N**, write a program to reverse it.

### Input

The first line contains an integer  **T**, total number of testcases. Then follow  **T**  lines, each line contains an integer  **N**.

### Output

For each test case, display the reverse of the given number  **N**, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ N ≤ 1000000
### Sample 1:
Input
Output

```
4
12345
31203
2123
2300
```

```
54321
30213
3212
32
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T18:54:41.431Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , n ;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> n;
        int res = 0;
        while(n > 0){
            int a = n%10;
            res = res*10+a;
            n = n/10;
        }
        cout << res;
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW007)