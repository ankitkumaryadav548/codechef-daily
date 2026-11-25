# Left View of Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the  **root** of a binary tree. Return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.

 **Note:**  If the tree is empty, return an empty list.

 **Examples :** 

```
Input: root = [1, 2, 3, 4, 5, N, N] 
 
Output:[1, 2, 4]
Explanation: From the left side of the tree, only the nodes 1, 2, and 4 are visible.

```

```
Input: root = [1, 2, 3, N, N, 4, N, N, 5, N, N]

Output: [1, 2, 4, 5]
Explanation: From the left side of the tree, only the nodes 1, 2, 4, and 5 are visible.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T10:13:56.607Z  

```cpp

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> ans;

        if (root == NULL) {
            return ans;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();

            for (int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();

                // First node of every level
                if (i == 0) {
                    ans.push_back(curr->data);
                }

                if (curr->left != NULL) {
                    q.push(curr->left);
                }

                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }
        }

        return ans;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1)