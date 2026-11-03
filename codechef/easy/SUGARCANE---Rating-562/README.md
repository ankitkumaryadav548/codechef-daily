# SUGARCANE - Rating 562

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T18:49:59.395Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here      
    int t , x ,y , a , b ;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b >> x >> y;
        if(a*b <= x*y) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SUGARCANE)