
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;

        if (root == NULL) {
            return ans;
        }

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int n = q.size();
            vector<int> temp(n);

            for (int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();

                int index;

                if (leftToRight) {
                    index = i;
                }
                else {
                    index = n - 1 - i;
                }

                temp[index] = curr->data;

                if (curr->left != NULL) {
                    q.push(curr->left);
                }

                if (curr->right != NULL) {
                    q.push(curr->right);
                }
            }

            for (int i = 0; i < n; i++) {
                ans.push_back(temp[i]);
            }

            leftToRight = !leftToRight;
        }

        return ans;
    }
};
