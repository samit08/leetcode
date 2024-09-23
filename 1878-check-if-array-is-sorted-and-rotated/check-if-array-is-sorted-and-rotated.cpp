class Solution {
public:
    bool check(vector<int>& v) {
        int n= v.size();
        int c=0;
        for(int i =1;i<n;i++){
            if(v[i-1]>v[i])
             c++;
        }
            if (v[n-1] > v[0]) {
            c++;
        }
        if(c<=1)
        return true;
        else 
        return false;


    }
};