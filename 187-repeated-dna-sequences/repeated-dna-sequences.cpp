class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        int l=0,r=0;
        int count=0;
        string st="";
        int n=s.size();
        unordered_map<string,int> mp;
        while(r<n)
        {
            int wsize=r-l+1;
            if(wsize<10) r++;

            else if(wsize==10)
            {
                st=s.substr(l,10);
                mp[st]++;
            
            l++;
            r++;
            }

        }
        for(auto ele : mp)
        {
            if(ele.second>=2)
            ans.push_back(ele.first);
        }
        return ans;
    }
};