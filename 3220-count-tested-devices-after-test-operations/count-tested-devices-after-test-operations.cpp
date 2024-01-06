class Solution {
public:
    int countTestedDevices(vector<int>& v) {
        int n =v.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>0){
                count++;           
            for(int j=i+1;j<n;j++)
            if(v[j]>0)
               v[j]--;
            }
        
        }return count;
                                                                                                                                                               
    }
};