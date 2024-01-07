class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& v) {
        int aa=0;
        float maxi =FLT_MIN;
        for(int i=0;i<v.size();i++)
        {    int a= v[i][0]*v[i][0]+v[i][1]*v[i][1];
              float f =sqrt(a);

            
            if(f>maxi)
            {maxi=f;
            aa=v[i][0]*v[i][1];
            }
            else if(f==maxi)
            aa=max(aa,v[i][0]*v[i][1]);
        } return aa;

    }
};