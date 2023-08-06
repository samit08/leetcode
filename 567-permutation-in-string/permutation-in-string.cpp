class Solution {
public:
   bool checkInclusion(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(m<n){
            return false;
        }
        vector <int> f1(26);
        vector <int> f2(26);
        for(int i=0; i<n; i++){
            f1[s[i]-'a']++;
        }
        int st=0;
        int e= st+n-1;
        for(int i=st;i<=e;i++){
            f2[t[i]-'a']++;
        }
        
        while(e<m){
            if(f2==f1) return true;
            e++;
            if(e!=m){
                 f2[t[e]-'a']++;  
                 f2[t[st]-'a']--;
                st++;
            }
           
           // if(f2==f1) return true;
        }
        return false;
        
   }
};