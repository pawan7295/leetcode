class Solution {
public:
    int lengthOfLastWord(string s) {
       int last=s.size()-1;
       int count=0;
       while(s[last]==' ')
       {
        last--;
       }
       while(last>=0 && s[last]!=' ')
       {
        count++;
        last--;
       }
       return count;
    }
};