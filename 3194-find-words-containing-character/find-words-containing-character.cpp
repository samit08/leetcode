class Solution {
public:
    vector<int> findWordsContaining(vector<string>& v, char x) {
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {if(v[i][j]==x){
            ans.push_back(i);
            break;}}
        }return ans;
    }
};