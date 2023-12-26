//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
   public:
    int findSum(int A[], int N)
    {
          int k=A[0];
          int sum =0;
    	for(int i=0;i<N;i++)
    	{
    	  
    	    if(k<A[i])
    	    {
    	        k=A[i];
    	        
    	    }
    	}
    	  
    	    int q=A[0];
          
    	for(int i=0;i<N;i++)
    	{
    	  
    	    if(q>A[i])
    	    {
    	        q=A[i];
    	        
    	    }
    	}
    	sum=k+q;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends