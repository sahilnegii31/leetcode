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
    void helper(TreeNode* root, int& secmin, int& min) {
        if (root == NULL) return;

        if (root->val < min) {
            secmin = min;
            min = root->val;
        }
        else if (root->val > min && (secmin == -1 || root->val < secmin)) {
            secmin = root->val;
        }

        helper(root->left, secmin, min);
        helper(root->right, secmin, min);
    }

    int findSecondMinimumValue(TreeNode* root) {
        if (root == NULL) return -1;

        int secmin = -1, min = root->val;
        helper(root, secmin, min);
        return secmin;
    }
};