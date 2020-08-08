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
    
    int tot(TreeNode* root, int sum){
                
        int yes = 0;
        if(sum - root->val == 0)
            yes = 1;
        
        // if(root->left != NULL)
        //     return pathSum(root,)
        
        if(root->left != NULL )
            yes = yes + tot(root->left,sum - root->val);
        
        
        
        if(root->right != NULL )
            yes = yes + tot(root->right,sum - root->val);
        
        
        return yes;
    }
    
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        int x = tot(root,sum);
        if(root->left!=NULL)
            x = x + pathSum(root->left,sum);
        if(root->right!=NULL)
            x = x + pathSum(root->right,sum);
        
//         while(root->left!=NULL || root->right!=NULL){
//             if(root->left!=NULL && root->right==NULL){
//                 x=x+tot(root->left,sum);
//                 root = root->left;
//             }
//             if(root->right!=NULL && root->left==NULL){
//                 x=x+tot(root->right,sum);
//                 root = root->right;
//             }
            
//         }
        return x;
        
    }
};
