class Solution {
public:
    string reverseVowels(string s) {
       int first=0;
       int last=s.size()-1;
       string st="aeiouAEIOU";
       while(first<last)
       {
        if(st.find(s[first])!=string::npos && st.find(s[last])!=string::npos )
        {
           
            swap(s[first],s[last]);
            first++;
            last--;
        }
        else if(st.find(s[first])==string::npos )
        {
            first++;
        }
        else if(st.find(s[last])==string::npos )
        {
            last--;
        }
       }
        return s;
    }
};