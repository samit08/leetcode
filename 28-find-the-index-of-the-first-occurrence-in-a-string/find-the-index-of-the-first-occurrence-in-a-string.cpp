class Solution {
public:
    int strStr(string s, string needle) {
        if (s.find(needle) >=0) {
            return s.find(needle);
        } else {
            return -1;
        }
    }
};
