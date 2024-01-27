class Solution {
public:
vector<string> f(string s) {
        // if (s.empty()) {
        //     return {};
        // } 
         if (s.length() == 0) {
            vector<string> b;
            b.push_back("");
            return b;
        }

    vector<string>letter({"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});
     char ch=s[0];
    string ros = s.substr(1);
    vector<string> rr;
    rr=  f(ros);
    vector<string> ans;
    string codes=letter[ch-'0'];
    for(int i=0;i<codes.length();i++)
    {
        char kk= codes[i];

        for(auto it:rr)
        ans.push_back(kk+it);
    }
     return ans;
  
    }
    vector<string> letterCombinations(string s) {
        if(s.length()==0) return{};
        return f(s);

    }
};