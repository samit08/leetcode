class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int i= v.size()-k;
        return v[i];
        
    }
};