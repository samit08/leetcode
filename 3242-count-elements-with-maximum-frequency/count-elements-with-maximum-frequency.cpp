class Solution {
public:
int maxi(vector<int>& v){
    int max=v[0];
    for(int i=1;i<v.size();i++){
          if(v[i]>max)
          max=v[i];
    }
    return max;
    
}
    int maxFrequencyElements(vector<int>& v) {
        int l= maxi(v);
        int a=0;
        vector<int> f(l+1,0);
        for(int i=0;i<v.size();i++){
            f[v[i]]+=1;

        }
        int sm=maxi(f);
      for(int j=0;j<f.size();j++){
        if(f[j]==sm)
        a+=f[j];
      }
   return a;
        
    }
};