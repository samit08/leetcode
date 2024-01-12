// #include <algorithm>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        int n=v.size();
        int k=n-1;
        vector<int> ans(n,0);
        int i=0,j=n-1;
         while(i<=j)
         {
             if(abs(v[i])< abs(v[j])) 
             {
             ans[k]=v[j]*v[j];
             j--;
             k--;}
             else
             {
                 
                 ans[k]=v[i]*v[i];
                 i++;
             k--;

             }
         }return ans;
    

        
    }
};