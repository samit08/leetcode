class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& v1, vector<int>& v2) {
        int count=0,coun=0;
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(v1[i]==v2[j]) 
                {count++;
                break;}
            }
        }
        
         for(int i=0;i<v2.size();i++)
        {
            for(int j=0;j<v1.size();j++)
            {
                if(v2[i]==v1[j])
                { coun++;
                break;}
            }
        }
     return {count,coun};
    }
};