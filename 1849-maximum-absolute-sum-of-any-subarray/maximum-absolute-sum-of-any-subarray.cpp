class Solution {
public:
    int maxAbsoluteSum(vector<int>& v) {
        int sum=0;
       int n=v.size();

       int maxi=INT_MIN;

        for(int i=0;i<n;i++)
        {
            sum=sum+v[i];
            maxi=max(sum,maxi);

            if(sum<0) sum=0;




        }
        int diff=0;
         int mini=INT_MAX;

        for(int i=0;i<n;i++)
        {
            diff=diff+v[i];
            mini=min(diff,mini);

            if(diff>0) diff=0;




        }
        return max(maxi,-mini);
        
    }
        
    
};