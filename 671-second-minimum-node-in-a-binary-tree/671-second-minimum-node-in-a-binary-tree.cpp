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
    void solve(TreeNode* root,long long &min1,long long &min2){
        if(root==NULL) return ;
        if(root->val<min1){
            min2=min1;
            min1=root->val;
        }
        if(root->val<min2 && root->val>min1){
            min2=root->val;
        }
        solve(root->left,min1,min2);
        solve(root->right,min1,min2);
    }
    int findSecondMinimumValue(TreeNode* root) {
       if(root==NULL || root->left==NULL && root->right==NULL) return -1;
        
        long long min1=21474836471;
        long long min2=21474836471;
        solve(root,min1,min2);
        if(min2==21474836471) return -1;
        return max(min1,min2);
    }
};