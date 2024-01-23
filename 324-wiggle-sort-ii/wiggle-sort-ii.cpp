#include <vector>
#include <algorithm>

class Solution {
public:
    void wiggleSort(std::vector<int>& v) {
        int n = v.size();
        std::sort(v.begin(), v.end());

        std::vector<int> ans(n);

        int mid = (n - 1) / 2;  // index of the middle element

        int k = n - 1;  // index for the larger elements
        int i = 0;      // index for the smaller elements

        while (i < n) {
            ans[i] = v[mid--];
            if (i + 1 < n) {
                ans[i + 1] = v[k--];
            }
            i += 2;
        }

        for (int j = 0; j < n; j++) {
            v[j] = ans[j];
        }
    }
};
