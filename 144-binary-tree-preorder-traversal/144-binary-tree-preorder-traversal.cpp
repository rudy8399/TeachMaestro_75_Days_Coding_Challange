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
    void preorder(vector<int>&res,TreeNode* root){
        if(root==NULL){
            return ;
        }
        res.push_back(root->val);
        preorder(res,root->left);
        preorder(res,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>res;
        if(root==NULL){
            return res;
        }
        // preorder(res,root);
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            res.push_back(node->val);
            if(node->right!=NULL){
                st.push(node->right);
            }
            if(node->left!=NULL){
                st.push(node->left);
            }
        
        }
        return res;
    }
};