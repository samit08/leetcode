class Solution {
public:
    bool check(vector<int>& v) {
        int count = 0;
        int n = v.size();
        for (int i = 1; i < n; i++) {
            if (v[i - 1] > v[i]) {
                // cout<<count<<"-";
                count++;
            }
        }

        if (v[n - 1] > v[0]) {
            // cout<<count<<" ";
            count++;
        }

        if (count <= 1)
            return true;
        else
            return false;
    }
};
