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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        TreeNode* temp=root;
        while(temp){
            if(temp->val==val) 
                return temp;
            
            else if(temp->val>val)
                temp =temp->left;
            
            else 
                temp=temp->right;
        }
        return NULL;
    }
        //         if(root==NULL) return NULL;
//         if(root->val==val) return root;
        
//         if(root->val>val){
//             return searchBST(root->left,val);
//         }
//         else{
//             return searchBST(root->right,val);
//         }
    
//     }
    
    
};