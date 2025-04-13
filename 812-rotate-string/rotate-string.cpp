class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        string newstr=s+s;
        if(newstr.find(goal)!=string :: npos)
        return true;

        return false;
    }
};