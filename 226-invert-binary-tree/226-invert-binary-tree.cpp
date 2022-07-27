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
    void solve (TreeNode* cur){
        if(!cur) return ;
        solve(cur->left);
        solve(cur->right);
        TreeNode* temp=cur->left;
        cur->left=cur->right;
        cur->right=temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        solve(root);
        return root;
    }
};