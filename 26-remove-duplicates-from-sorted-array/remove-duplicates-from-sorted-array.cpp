class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n=v.size();
        int i =0,j=1;
        while(j<n)
        {
            
            
            //0 1 2 3
            //1 1 1 1
            // i j
            //  ss 
            if(v[i]==v[j])
             { v.erase(v.begin()+j);
              n--;
            //  for(int ss=j;ss<n-1;ss++)
            // //  {
            //      v[ss]=v[ss+1];
            // //  }
            //     i--;
            //     j--;
            }
            else{
                i++;
            j++;
            }
            
        }
        int k=v.size();
        return k;
    }
};