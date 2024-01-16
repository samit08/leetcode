class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        int n = v.size();
        int count = 0;
        int pre = -1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            maxi = max(v[i], maxi);
            if (maxi ==i) {
                count++;
                // pre = maxi;
            }
        }

        return count;
    }
};
