class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;

        while (curr) {
            if (curr->left == nullptr) {
                if (prev && prev->val > curr->val) {
                    if (first == nullptr) {
                        first = prev;
                    }
                    second = curr;
                }

                prev = curr;
                curr = curr->right;
            }
            else {
                TreeNode* pred = curr->left;
                while (pred->right != nullptr && pred->right != curr) {
                    pred = pred->right;
                }
                if (pred->right == nullptr) {
                    pred->right = curr;
                    curr = curr->left;
                }
                else {
                    pred->right = nullptr;
                    if (prev && prev->val > curr->val) {
                        if (first == nullptr) {
                            first = prev;
                        }
                        second = curr;
                    }
                    prev = curr;
                    curr = curr->right;
                }
            }
        }
        swap(first->val, second->val);
    }
};