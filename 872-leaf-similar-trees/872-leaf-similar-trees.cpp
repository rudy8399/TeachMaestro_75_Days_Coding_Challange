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
    void solve(TreeNode* root, vector<int>& r){
        if(root==NULL){
            return ;
        }
        if(!root->left && !root->right){
            r.push_back(root->val);
        }
        solve(root->left,r);
        solve(root->right,r);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>r1;
        vector<int>r2;
        solve(root1,r1);
        solve(root2,r2);
        int n1=r1.size();
        int n2=r2.size();
        if(n1!=n2) return false;
        else{
            for(int i=0;i<n1;i++){
                if(r1[i]!=r2[i]) return false;
            }
            
        }
        return true;
    }
};