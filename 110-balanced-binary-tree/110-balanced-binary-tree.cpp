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
    pair<int,bool> isBalancedFast(TreeNode* root){
        if(root==NULL){
            pair<int,bool>p=make_pair(0,true);
            return p;
        }
        pair<int,bool>left=isBalancedFast(root->left);
        pair<int,bool>right=isBalancedFast(root->right);
        bool cond=abs(left.first-right.first)<=1;
        
        pair<int,bool>ans;
        if(left.second && right.second && cond){
            ans.first=max(left.first,right.first)+1;
            ans.second=true;
        }
        else{
            ans.first=max(left.first,right.first)+1;
            ans.second=false;
        }
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        pair<int,bool>ans=isBalancedFast(root);
        return ans.second;
        
        
    }
};