# SEATNUMBER - Rating 613

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T06:29:40.539Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t , n , x ;
    cin >> t ;
    for(int i=0;i<t;i++){
        cin >> n >> x ;
        if(x%n==0) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SEATNUMBER)