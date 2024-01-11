class Solution {
public:
    string restoreString(string s, vector<int>& I) {
         string sol=s;
        for(int i = 0 ; i< I.size();i++){
            sol[I[i]]=s[i];
        }

        return sol;
    }
};