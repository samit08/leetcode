class Solution {
public:
    void rotate(vector<int>& v, int k) {

           int n= v.size();
           vector<int> temp(v);

            for(int i=0;i<n;i++)
            {
                temp[(i+k)%n]=v[i];
            }

      v=temp;

        
    }
};