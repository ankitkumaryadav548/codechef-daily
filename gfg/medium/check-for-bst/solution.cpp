
class Solution {
public:

    bool check(Node* root, long long mini, long long maxi)
    {
        if(root == NULL)
            return true;

        if(root->data <= mini || root->data >= maxi)
            return false;

        return check(root->left, mini, root->data) &&
               check(root->right, root->data, maxi);
    }

    bool isBST(Node* root) {

        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
