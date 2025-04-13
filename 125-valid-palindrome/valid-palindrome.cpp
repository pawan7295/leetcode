class Solution {
public:
    bool isPalindrome(string s) {
       // vector<string> st;
       string st;
        for(int i=0;i<s.size();i++)
        {
            if(((int)s[i]>=65 && (int)s[i]<=90) || ((int)s[i]>=97 && (int)s[i]<=122) || ((int)s[i]>=48 && (int)s[i]<=57))
            {
                st.push_back(tolower(s[i]));
            }
        } 
        string rev=st;
        reverse(rev.begin(),rev.end());
        return rev==st;

     
    }
};