class Solution {
public:
    int singleNumber(vector<int>& v) {
         int n= v.size();
        sort(v.begin(),v.end());

        
        int k = v[n-1];
    for(int i=0,j=1;i<n-1;i=i+2,j=j+2)
    {
        if(v[i]!=v[j])
      {  k=v[i];
        break;
      }

    }
     return k; 
        
    }
};