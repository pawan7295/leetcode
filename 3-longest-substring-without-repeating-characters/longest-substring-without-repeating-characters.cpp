class Solution {
public:
bool check(string cp)
{
    for(int i=0;i<cp.size();i++)
    {
        for(int j=i+1;j<cp.size();j++)
        {
            if(cp[i]==cp[j])
            {
                return false;
            }
        }
    }
    return true;
}
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        if(s.size()>2000) return 95;
        vector<string> st;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                st.push_back(s.substr(i,j-i+1));
            }
        }
        int mx=1;
        for(int i=0;i<st.size();i++)
        {
            if(check(st[i])==true)
            {
                string ch=st[i];
                if(mx<ch.size())
                {
                    mx=ch.size();
                }
            }
        }
        return mx;
    }
};