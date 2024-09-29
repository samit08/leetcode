//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mean(int N , int a[]) {
        // int n =a.length;
        int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+a[i];
            
        }
        int avg=sum/N;
        return avg;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.mean(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends