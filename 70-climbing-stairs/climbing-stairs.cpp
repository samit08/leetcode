class Solution {
public:
 
//  int cs(int n,vector<int> qb){
//         if (n == 2||n==1) 
//                return n;

//      if(qb[n]>0) return qb[n];

//         int a = cs(n - 1,qb);
//         int b = cs(n - 2,qb);
//         int k = a + b;
//         qb[n]=k;

//         return k;
//  }
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            if(i==1)
            dp[i]=dp[i-1];
            else 
            dp[i]=dp[i-1]+dp[i-2];
            // else 
            // dp[i]=dp[i-1]+dp[i-2]+dp[i-3];

        }
        return dp[n];

    }
};
