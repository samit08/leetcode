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


void down(TreeNode* root, string path, vector<string>& ans) {
    if (root == nullptr) return;
    
    // Add the current node's value to the path
    path += to_string(root->val);

    // If it's a leaf node, add the path to the ans vector
    if (root->left == nullptr && root->right == nullptr) {
        ans.push_back(path);
        return;
    }
    
    // Add "->" to the path
    path += "->";

    // Recursively traverse the left and right subtrees
    down(root->left, path, ans);
    down(root->right, path, ans);
}

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL) return{};
     if(root->right==NULL && root->left==NULL) {
         
     ans.push_back(to_string(root->val));
     return ans; }

        
         down(root,"",ans);
         return ans;
        
    }
};