# INSURANCE - Rating 470

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-19T18:23:55.956Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t , n , m , k ;
	cin >> t ;
	for(int i=0;i<t;i++){
	    cin >> n >> m >> k ; 
	    if(m-k>=n) cout << "Yes";
	    else cout << "No";
	    cout << endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/INSURANCE)