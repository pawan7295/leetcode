class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int j=0;
        int i=0;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        if(i<ransomNote.size())
        {
            while(j<magazine.size())
            {
                if(ransomNote[i]==magazine[j])
                {
                    j++;
                    i++;
                }
                else
                {
                    j++;
                }
            }
        }
        if(i==ransomNote.size())
        return true;
        return false;
    }
};