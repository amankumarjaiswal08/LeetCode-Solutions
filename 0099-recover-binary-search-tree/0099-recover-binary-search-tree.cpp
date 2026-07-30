/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderArr;
    int x = -1, y = -1;
    bool flag = false;
    void inorder(TreeNode* root) {
        if (root == NULL) return;

        inorder(root->left);
        inorderArr.push_back(root->val);
        inorder(root->right);
    }
    void find_x_y() {
        int n = inorderArr.size();
        for (int i = 0; i < n - 1; i++) {
            if (inorderArr[i + 1] < inorderArr[i]) {

                if (!flag) {
                    x = inorderArr[i];
                    y = inorderArr[i + 1];
                    flag = true;
                }
                else {
                    y = inorderArr[i + 1];
                }
            }
        }
    }

    void preorder(TreeNode* root) {
        if (root == NULL) return;
        if (root->val == x)
            root->val = y;
        else if (root->val == y)
            root->val = x;

        preorder(root->left);
        preorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        find_x_y();
        preorder(root);
    }
};