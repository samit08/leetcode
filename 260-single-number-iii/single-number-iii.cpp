class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {

         int n =v.size();
         vector<int> ans;
        
         map<int,int> m;
         for(int i=0;i<n;i++)
         {
             m[v[i]]++;

         }
         for(int i =0;i<n;i++)
         { 
            if(m[v[i]]==1)
             ans.push_back(v[i]);
            
            
         }
return ans;
        
    }
};