class Solution {
public:
void helper(string s,int &count,string brokenletters)
{
    for(int i=0;i<brokenletters.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(brokenletters[i]==s[j])
            {
                count++;
                return;
            }
        }
    }
}
    int canBeTypedWords(string text, string brokenletters) {
        vector<string> ans;
        string st="";
        int i=0;
        while(i<text.size())
        {
            if(text[i]==' ')
            {
                ans.push_back(st);
                st.clear();
            }
            else
            {
                st=st+text[i];
            }
            i++;
        }
        if (!st.empty()) ans.push_back(st);
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            helper(ans[i],count,brokenletters);
        }
        return ans.size()-count;
    }
};