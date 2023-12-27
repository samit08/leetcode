class Solution {
public:
    int findDuplicate(vector<int>& v) {

        int n= v.size();
        sort(v.begin(),v.end());

        
        int k = -1;
    for(int i=0,j=1;i<n-1;i++,j++)
    {
        if(v[i]==v[j])
      {  k=v[i];
        break;
      }

    }
     return k; 


    }  
   
    
};