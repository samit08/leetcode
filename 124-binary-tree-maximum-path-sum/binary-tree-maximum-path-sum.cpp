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
int ans=INT_MIN;

int sum(TreeNode* node){
    if(node==nullptr) return 0;
     int ls=max(0,sum(node->left));
     int rs=max(0,sum(node->right));
    //  if(ls>=0||rs>=0)
  ans =max((ls+rs)+node->val,ans);
  
    return node->val+max(ls,rs);
      }

    int maxPathSum(TreeNode* root) {
         if(root==nullptr) return 0;
        sum(root);
         return ans;
        
    }
};