# BROKENPHONE - Rating 447

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T13:39:23.706Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , a , b , c , d ;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c >> d ;
        if(a-c > b-d) cout << "Second";
        else if(a-c < b-d) cout << "First";
        else cout << "ANY";
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BROKENPHONE)