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
    bool isEqual(TreeNode* root, TreeNode* subRoot){       
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL && subRoot!=NULL) return false;
        if(root!=NULL && subRoot==NULL) return false;
        if(root->val!=subRoot->val) return false;
        
        bool left=isEqual(root->left,subRoot->left);
        bool right=isEqual(root->right,subRoot->right);
        return left && right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* frontNode=q.front();
            q.pop();
            if(frontNode->val==subRoot->val){
                bool ans=isEqual(frontNode,subRoot);
                if(ans==true) return true;
            }
            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        return false;
    }
};