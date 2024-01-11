class Solution {
public:
    void reverseString(vector<char>& v) {
        int n =v.size();
        int a=0;
        int c=n-1;
        while(a<c)
        {
            swap(v[a],v[c]);
            a++;
            c--;
        }
        
    }
};