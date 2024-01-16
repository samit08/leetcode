class Solution {
public:
    int partitionDisjoint(vector<int>& v) {
        int n =v.size();
        int mini =INT_MAX;
        int k=n-1;
        vector<int> rm(n,0);
        for(int i=n-1;i>0;i--)
        { mini =min(v[i],mini);
           rm[k]=mini;
           k--;
        }
        
     int maxi=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            maxi=max(v[i],maxi);
            if(maxi<=rm[i+1])
             return i+1;
        }
      return -1;  
    }
};