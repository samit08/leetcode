class Solution {
public:
    void nextPermutation(vector<int>& v) {
             int n=v.size();
        int in =-1;
        for(int i =n-2;i>=0;i--)
        {    if(v[i]<v[i+1])
        {
            in =i;
            break;
        }
        }

        if(in==-1)
        {
            reverse(v.begin(),v.end());

        }
        else{ for(int i=n-1;i>=in;i--)
        {
            if(v[i]>v[in])
            {
                swap(v[i],v[in]);
                break;
            }

        }
        
        reverse(v.begin()+in+1,v.end());
        }
    }
};