
class Solution {
  public:
    Node* prev = NULL;

    void inorder(Node* root, Node* &head) {
        if (root == NULL) {
            return;
        }

        inorder(root->left, head);

        if (prev == NULL) {
            head = root;
        }
        else {
            root->left = prev;
            prev->right = root;
        }

        prev = root;

        inorder(root->right, head);
    }

    Node* treeToDLL(Node* root) {
        Node* head = NULL;
        prev = NULL;

        inorder(root, head);

        return head;
    }
};
