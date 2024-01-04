class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int l = 0, r = 0;
        int sum = 0;
        int n = v.size();
        int ans = INT_MAX;
        
       while(r<n)
       { sum+=v[r];
           while(sum>=target && r>=l)
           {ans =min(ans,r-l+1);
           sum-=v[l];
           l++;
           
           }
          // else
            r++;
           }

        if(ans!=INT_MAX)     
       
         return  ans;
         else
         return 0;
    }
};
