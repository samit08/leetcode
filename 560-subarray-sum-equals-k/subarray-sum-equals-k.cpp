class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
       unordered_map<int,int>  m;
        m[0]=1;
        int presum=0,count=0;
        
        for(int i=0;i<v.size();i++)
        { presum=presum+v[i];
          int remove = presum-k;
          count=count+m[remove];
          m[presum]++;


         
            

        }return count;
        
    }
};