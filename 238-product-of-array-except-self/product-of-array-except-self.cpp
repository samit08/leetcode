class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n =v.size();
        int rp=1;
        int l=n-1;
        vector<int> ans;
        int multi =1;
        vector<int> right(n,0);
        for(int i=n-1;i>=0;i--)
        {  rp = rp*v[i];
         right[l]=rp;
         l--;

        }
         ans.push_back(right[1]);
        for(int i=1;i<n-1;i++)
        {    
             multi= multi*v[i-1];
            ans.push_back(multi*right[i+1]);
        }
         ans.push_back(multi*v[n-2]);
        return ans;
    }
};