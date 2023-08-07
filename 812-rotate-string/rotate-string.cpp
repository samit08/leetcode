class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length()<s.length())
        {
            return false;
        }
        string st= goal+goal;
        return st.find(s) != string::npos;

    }
       
};