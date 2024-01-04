class Solution {
public:
    vector<int> numberGame(vector<int>& v) {
        int n=v.size();
        vector<int> arr(n,0);
        sort(v.begin(),v.end());
    
        for(int i =0;i<n;i++)
        { if(i%2==0)
          arr[i+1]=v[i];
          else
          arr[i-1]=v[i];
        }

        return arr;
    }
};