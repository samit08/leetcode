//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
          if (S.length() <= 1) {
            return S;
        }

        // Reverse the substring excluding the first and last characters
        return S.back()+revStr(S.substr(1, S.length() - 2)) + S.front();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends