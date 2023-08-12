class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        vector<int> f1(26, 0); 
        vector<int> f2(26, 0);
        for(int i=0;i<s.length();i++)
        {

             int index= s[i]-'a';
             f1[index]++;
             
        } 

         for(int j=0;j<s.length();j++)
        {
             int inde= t[j]-'a';
             f2[inde]++;
             
        } 
        
        if(f1==f2)
        return true;
        else
        return false;

        
    }
};