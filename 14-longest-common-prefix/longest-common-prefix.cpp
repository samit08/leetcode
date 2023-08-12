class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        sort(v.begin(),v.end());
        string a ="";
        int n=v.size();
        string f = v[0];
        string l = v[n-1];
        int len =min(f.length(),l.length());
        for(int i=0;i<len;i++)
        {
            if(f[i]==l[i])
               a +=f[i];
            else
            break;
        }
        return a;
        
        
    }
};