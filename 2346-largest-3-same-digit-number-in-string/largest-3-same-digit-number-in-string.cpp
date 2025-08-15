class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        // unordered_map<char,int> mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[num[i]]++;
        // }
        // string  ans;
        // char ch;
        // for(auto ele : mp)
        // {
        //     if(ele.second>3)
        //     {
        //         ch=ele.first;
        //     }
        // }
        // ans=ch+ch+ch;
        // return ans;

       string m="";
       for(int i=0;i<num.size();i++){
        if(num[i]==num[i+1]&& num[i]==num[i+2]){
            string curr= num.substr(i,3);
            if(curr>m){
                m=curr;
            }
        }
       }
       return m;
    }
};