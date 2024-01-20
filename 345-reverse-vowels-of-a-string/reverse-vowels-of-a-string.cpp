#include <string>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;

        while (i <= j) {
            if ((s[i] != 'a' && s[i] != 'u' && s[i] != 'o' && s[i] != 'i' && s[i] != 'e' &&
                 s[i] != 'A' && s[i] != 'U' && s[i] != 'O' && s[i] != 'I' && s[i] != 'E')) {
                i++;
            }
           else if (s[j] != 'a' && s[j] != 'u' && s[j] != 'o' && s[j] != 'i' && s[j] != 'e' &&
                s[j] != 'A' && s[j] != 'U' && s[j] != 'O' && s[j] != 'I' && s[j] != 'E') {
                j--;
            } else {
                std::swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
// 