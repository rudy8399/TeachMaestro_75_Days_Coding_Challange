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
    void sum(TreeNode* root, int low, int high,int &ans){
        if(root==NULL){
            return ;
        }
        if(root->val>=low && root->val<=high){
            ans+=root->val;
        }
        sum(root->left,low,high,ans);
        sum(root->right,low,high,ans);
        
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)return 0;
        int left=rangeSumBST(root->left,low,high);
        int right=rangeSumBST(root->right,low,high);
        if(root->val>=low && root->val<=high){
            return root->val+left+right;
        }
        else return left+right;
        
    }
        
        
        
        
        
        //     // int ans=0;
    //     // sum(root,low,high,ans);
    //     // return ans;
    //     if(root==NULL){
    //         return 0;
    //     }
    //     if(root->val>=low && root->val<=high){
    //       return root->val+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
    //     }
    //     else{
    //          return rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
    //     }
    // }
};