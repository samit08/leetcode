class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
       int n = arr.size();
           vector<int> e(n, 0);;
           int k =0;
        for(int i=0;i<n;i++)
        { 
            if(arr[i]>=0)
            { 
                e[k]=arr[i];
                k++;
            }
        }

        vector<int> o(n, 0);
            k =0;
        for(int i=0;i<n;i++)
        { 
            if(arr[i]<0)
            { 
                o[k]=arr[i];
                k++;
            }
        }
// 3 1 2
//-2 -5 -4
            vector<int> ans(n, 0);
      for(int i =0,j=0,k=0;i<n;i++)
      {
          if(i%2==0)
          { ans[i]=e[k];
          k++;

          }
          else
          {ans[i]=o[j];
          j++;}
      }
        return ans;

    }

  
};