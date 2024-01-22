class Solution {
public:
bool is(int l,int r,string s)
{  while(l<=r)
        {
            if(s[l]==s[r]){
                l++;
                r--;}
                else return false;
        }
        return 1;

}
    bool validPalindrome(string s) {
        int n= s.length();
        int l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]==s[r]){
                l++;
                r--;}
               else
                return is(l + 1, r, s) || is(l, r - 1, s);

                
            
        }
        return 1;
    }
};