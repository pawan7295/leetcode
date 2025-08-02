class Solution {
public:
// void helper(string ans,string original,string s,bool &flag)
// {
//     if(original=="")
//     {
//         if(ans==s)
//         {
//             flag=true;
//         }
//         return ;
//     }
//     char ch=original[0];
//     helper(ans,original.substr(1),s,flag);
//     helper(ans+ch,original.substr(1),s,flag);
// }
    bool isSubsequence(string s, string t) {
        // bool flag=false;
        //  helper("",t,s,flag);
        //  return flag;

        int i=0,j=0;
        int a=s.size();
        int b=t.size();
        while(i<a && j<b)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }
        if(a==i) return true;
        return false;
    }
};