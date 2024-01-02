class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=INT_MIN;
        int c=0;
          for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0) c++;

        }
        if(c==nums.size())
        return 0;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==1){
             count++;
             maxi =max(maxi,count); }
            else count=0;
        }
        // if (count>=1)
        return maxi;
        // else 
        // return 0;

    }
};