#include <iostream>
#include <string>

class Solution {
public:
    bool isLongPressedName(std::string name, std::string typed) {
        if (name.length() > typed.length()) {
            return false;
        }

        int i = 0, j = 0;
        while (j < typed.length()) {
            if (i < name.length() && name[i] == typed[j]) {
                i++;
                j++;
            } else if (j == 0 || typed[j] != typed[j - 1]) {
                return false;
            } else {
                j++;
            }
        }

        return i == name.length();
    }
};
