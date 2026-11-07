# QUALIFY - Rating 593

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T14:00:33.249Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        if(n%4==0) cout << "GOOD";
        else cout << "Not Good";
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/QUALIFY)