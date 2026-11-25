
class Solution {
  public:
    int diameter(Node* root) {
        int ans = 0;
        height(root, ans);
        return ans;
    }

    int height(Node* root, int &ans) {
        if (root == NULL)
            return 0;

        int leftHeight = height(root->left, ans);
        int rightHeight = height(root->right, ans);

        // Diameter passing through the current node
        ans = max(ans, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
};
