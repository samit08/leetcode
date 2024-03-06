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
public:int  check(TreeNode* node){
      if(node==NULL) return 0;

         int lh=check(node->left);
         int rh=check(node->right);
          int hh=1+max(lh,rh);
          
         return hh;
}
int left(TreeNode* root){
     if(root==NULL) return 0;
    int aru=check(root->left);
      return aru;
}

int right(TreeNode* root){
     if(root==NULL) return 0;
    int ar=check(root->right);
      return ar;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
       
        int leftHeight = left(root);
        int rightHeight = right(root);

        int maxi = leftHeight + rightHeight; // Diameter of current node's subtree
        
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        maxi = max(maxi, max(leftDiameter, rightDiameter));

        return maxi;

        
    }
};