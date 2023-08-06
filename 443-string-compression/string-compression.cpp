class Solution {
public:
    int compress(vector<char>& v) {
        
        int ansindex=0;
        int i=0;
        int n = v.size();
        while(i<n)
        {
             int j=i+1;
            while(j<n && v[i]==v[j])
            {

                j++;

            }
            v[ansindex++] = v[i];

          
          int count=j-i;

          if(count>1)
            {
                string st = to_string(count);
                for(auto stn:st)
                { v[ansindex++]=stn;

                }
                
            }
            i=j;
        }
        return ansindex;
    }
};