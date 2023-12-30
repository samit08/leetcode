class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {


        int left =m-1;
        int right =0;
        while(left>=0 && right<n)
        {
            if(v1[left]>v2[right])
            {
                swap(v1[left],v2[right]);
                left--;
                right++;
            }
            else break;
        }
        // sort(v1.begin(),v1.end());
        // sort(v2.begin(),v2.end());
        
        for(int i=m;i<n+m;i++)
        {
          v1[i]=v2[i-m];
        }
     sort(v1.begin(),v1.end());
        
    }
};