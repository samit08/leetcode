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
int  check(TreeNode* node){
      if(node==NULL) return 0;

         int lh=check(node->left);
         int rh=check(node->right);
          int hh=1+max(lh,rh);
          
         return hh;
}   bool isBalanced(TreeNode* root) {
         if(root==NULL) return 1;
        if(abs(check(root->left)-check(root->right))>1) return 0;
         
         
         return isBalanced(root->left) &&isBalanced(root->right);


        
    }
};