class Solution {
public:
    string removeOuterParentheses(string s) {
    int n=s.size();
    int counter=0;
    string ans;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(' && counter==0)
        {
            counter++;
        }else if(s[i]=='(')
        {
            ans=ans+s[i];
            counter++;
        }
        else if(s[i]==')' && counter<2)
        {
            counter--;
        }
        else
        {
            ans=ans+s[i];
            counter--;
        }
    }
    return ans;
    }
};