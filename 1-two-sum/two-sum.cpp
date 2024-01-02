class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        map<int,int> m;
        int n= v.size();
        for(int i=0;i<n;i++){
            int sum =target-v[i];
            if(m.find(sum)!=m.end())
                return{m[sum],i};
            else
              m[v[i]]=i;
        }
       
     return{-1,-1};   
    }
    
};