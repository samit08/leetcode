class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n =v.size();
        int ss=0;
         map<int,int> m;
         for(int i=0;i<n;i++)
         {
             m[v[i]]++;

         }
         for(int i =0;i<n;i++)
         { 
            if(m[v[i]]==1)
             return v[i];
            
            
         }
return 0;
        
    }
};