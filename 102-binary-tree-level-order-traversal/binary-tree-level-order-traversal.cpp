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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> ans;
      if (root == nullptr) return ans; 
    // vector<int> level;
    queue<TreeNode*> q;
      q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> level; 
        for(int i =0;i<n;i++)
        {
            TreeNode* samit=q.front();
            q.pop();
            if(samit->left!=NULL) q.push(samit->left);
            if(samit->right!=NULL) q.push(samit->right);
            level.push_back(samit->val);

        }
        ans.push_back(level);


    }
    return ans;
        
    }
};