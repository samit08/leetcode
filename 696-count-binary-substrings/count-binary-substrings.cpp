class Solution {
public:
    int countBinarySubstrings(string s) {
      int pre=0;
      int cur=1;
      int sum =0;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]==s[i+1])
          cur++;
          else
          { int mini=min(cur,pre);
          sum+=mini;
          pre=cur;
             cur=1;

          }
      }
       return sum; 
    }
};