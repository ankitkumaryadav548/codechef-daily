# NEARESTEXIT - Rating 584

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T06:48:20.932Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , a , b , c ;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c ;
        if(a<=b && b>=c ) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NEARESTEXIT)