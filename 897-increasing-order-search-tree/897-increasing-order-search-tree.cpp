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
    void inorder(TreeNode* root,vector<TreeNode*>&lst){
        if(root==NULL){
            return ;
        }
        inorder(root->left,lst);
        lst.push_back(root);
        inorder(root->right,lst);
    }
    void solver(TreeNode* root,vector<TreeNode*>&lst){
       
        
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        vector<TreeNode*>lst;
        inorder(root,lst);
        
         for(int i=0;i<lst.size()-1;i++){
            lst[i]->right=lst[i+1];
            lst[i]->left=NULL;
        }
        lst[lst.size()-1]->right=NULL;
        lst[lst.size()-1]->left=NULL;
        root=lst[0];
        
        return root;
    }
};