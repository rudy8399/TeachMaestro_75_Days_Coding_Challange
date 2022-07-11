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
private:
    pair<int,int>diameterFast(TreeNode* root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>op1=diameterFast(root->left);
        pair<int,int>op2=diameterFast(root->right);
        int op3=op1.second+op2.second+1;
        
        pair<int,int>ans;
        ans.first=max(max(op1.first,op2.first),op3);
        ans.second=max(op1.second,op2.second)+1;
        return ans;
        
        
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>ans=diameterFast(root);
        return ans.first-1;
    }
};