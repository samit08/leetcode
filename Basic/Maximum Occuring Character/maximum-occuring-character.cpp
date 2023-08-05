//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str) {
    int char_count[26] = {0}; // Array to store character frequencies

    // Count the occurrences of each character in the string
    for (char c : str) {
        char_count[c - 'a']++;
    }

    char max_char = 'a';
    int max_count = char_count[0];

    // Find the character with the maximum occurrence
    for (int i = 1; i < 26; ++i) {
        if (char_count[i] > max_count) {
            max_count = char_count[i];
            max_char = 'a' + i;
        }
    }

    return max_char;
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