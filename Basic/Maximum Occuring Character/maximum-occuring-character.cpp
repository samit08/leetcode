//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char ,int> mpp;
        for(int i=0;i<str.length();i++)
        {
            mpp[str[i]]++;
        }
        char ans;
     int maxi =INT_MIN;
        for(auto pr: mpp)
        {
            if(pr.second>maxi)
             {maxi=pr.second;
             ans=pr.first;
                 
             }

        }
        return ans;
        
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends