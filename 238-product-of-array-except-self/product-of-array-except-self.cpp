class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> ans;
         int multi =1;
         int flag=0;
         for(int i=0;i<nums.size();i++)
         {   if(nums[i]==0) {flag++;continue; }
             multi =multi*nums[i];
         } 
         int k;
         for(int i=0;i<nums.size();i++)
         {  if(flag >=1){
              if(nums[i]!=0)
              {ans.push_back(0);}
              else if(flag==nums.size()) ans.push_back(0);

              else if(flag>1 && flag<nums.size())ans.push_back(0);
              else  ans.push_back(multi);
              }
             else
             {int k = multi/nums[i];
             ans.push_back(k);}
         }
        return ans;

    }
};