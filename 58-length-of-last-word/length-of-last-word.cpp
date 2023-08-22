class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0;
        int c = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                c++;
            } else {
                break;
            }
        }

        // Remove the trailing spaces
        s.erase(n - c, c);

        // Count the length of the last word
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                break;
            } else {
                count++;
            }
        }

        return count;
    }
};
