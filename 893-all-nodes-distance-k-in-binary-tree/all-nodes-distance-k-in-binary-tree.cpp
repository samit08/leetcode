/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

 void markp(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&pt,TreeNode* target){
queue<TreeNode*> q;
q.push(root);
while(!q.empty()){
TreeNode* curr=q.front();
q.pop();
if(curr->left)
{ q.push(curr->left);
  pt[curr->left]=curr;
}
if(curr->right)
{q.push(curr->right);
 pt[curr->right]=curr;
}
}
}
 vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>pt;
         markp(root, pt,target);
          unordered_map<TreeNode*,bool> visited;
          queue<TreeNode*> q;
          q.push(target);
          visited[target]=true;
          int cl=0;
          while(!q.empty())
          {
            int n=q.size();
            if(cl==k) break;
            for(int i=0;i<n;i++){
                TreeNode* top=q.front();
                q.pop();
                if(top->left &&! visited[top->left])
                {
                    q.push(top->left);
                    visited[top->left]=true;
                }
                 if(top->right &&! visited[top->right])
                {
                    q.push(top->right);
                    visited[top->right]=true;
                }
                if(pt[top] &&! visited[pt[top]])
                {
                    q.push(pt[top]);
                    visited[pt[top]]=true;
                }

            }
            cl++;
         }
          vector<int> ans;
    while (!q.empty()) {
        ans.push_back(q.front()->val);
        q.pop();
    }
         return ans;




          
          


         

        
    }
};