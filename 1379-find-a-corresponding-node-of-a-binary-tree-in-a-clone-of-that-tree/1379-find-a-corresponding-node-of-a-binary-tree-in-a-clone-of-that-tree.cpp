/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    void getTarget(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode* &ans){
        if(original==NULL && cloned==NULL) return;
        if(original==target){
            ans=cloned;
            return ;
            }
        getTarget(original->left,cloned->left,target,ans);
        getTarget(original->right,cloned->right,target,ans);
        
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans=NULL;
        getTarget(original,cloned,target,ans);
        return ans;
        
    
    
    }
};