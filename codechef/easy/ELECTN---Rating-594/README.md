# ELECTN - Rating 594

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T14:04:45.112Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , x , a , b;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> x >> a >> b;
        if(a*1+b*2 >= x) cout  << "Qualify";else cout << "NotQualify"; cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ELECTN)