class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      unordered_map<int ,int> mp;
      for(int ele : nums)
      {
        mp[ele]++;
      }
      for(auto single : mp)
      {
        if(single.second==1)
        return single.first;
      }
      return -1;
    }
};