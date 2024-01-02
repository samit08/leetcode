class Solution {
public:
    int findPeakElement(vector<int>& v) {
        //  vector<int> ans;
        if(v.size()==1||v[0]>v[1])return 0;
        if(v[v.size()-1]>v[v.size()-2])return v.size()-1;
        for(int i=1;i<v.size()-1;i++)
        {
            
            if( v[i-1]<v[i] && v[i]>v[i+1])
            {
                return i;
            }
        }return -1;
    }
};