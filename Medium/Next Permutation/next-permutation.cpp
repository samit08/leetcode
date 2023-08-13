//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

        class Solution {
public:
    vector<int> nextPermutation(int n, vector<int>& v) {
        int index = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] < v[i + 1]) {
                index = i;
                break;
            }
        }
        
        if (index >= 0) {
            for (int i = n - 1; i > index; i--) {
                if (v[index] < v[i]) {
                    swap(v[index], v[i]);
                    break;
                }
            }
        }
        
        reverse(v.begin() + index + 1, v.end());
        return v;
    }
};

    

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends