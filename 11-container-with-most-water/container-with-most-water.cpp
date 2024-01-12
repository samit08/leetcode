class Solution {
public:
    int maxArea(vector<int>& v) {
        int n= v.size();
    int s=0,l=n-1;
    int mini=INT_MAX;
    int maxi =INT_MIN;
    int area=0;
    while(s<l){
     mini =min(v[s],v[l]);
     area=mini*(l-s);
     maxi=max(area,maxi);
    if(v[s]>v[l])
     l--;
     else
     s++;}
     return maxi;

    }
};