class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        
        int n = v1.size();
        int m = v2.size();
        vector<int> temp;
        for(int i=0;i<n;i++)
        { for(int j=0;j<m;j++)
          {
              if(v1[i]==v2[j])
             { temp.push_back(v1[i]);
             break;
              }
          }

        }
        // for(int i=0,j=i+1;i<n;i++)
        // { if(temp[i]==temp[j])
        // {
        
        // }

        // }
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(),temp.end()), temp.end());

        return temp;
    }
};