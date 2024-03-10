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
   void Ii(TreeNode* root,vector<int>& ans1){
 if(root==NULL) {ans1.push_back(-1);
 return;}
       ans1.push_back(root->val);
        Ii(root->left,ans1);
        Ii(root->right,ans1);
}
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans1;
            Ii(root,ans1);
            return ans1;

    } 
   void i(TreeNode* root,vector<int>& ans){
 if(root==NULL) {ans.push_back(-1);
 return;}
       ans.push_back(root->val);
        i(root->right,ans);
         i(root->left,ans);
}
    vector<int> preorderTraversa(TreeNode* root) {
    vector<int> ans;
            i(root,ans);
            return ans;

    } 
    bool isSymmetric(TreeNode* root) {
        // if(root->val==nullptr) return 1;
        // if(root->left->val!=root->right->val) return 0;
        vector<int> x=preorderTraversa(root->left);
        for(int i=0;i<x.size();i++){
            cout<<x[i];
        }
        vector<int> y=preorderTraversal(root->right);
        if( x==y )
        return 1;
        else
        return 0;
        
    }
};