class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> add;
        vector<int> curr=intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(curr[1]>=intervals[i][0])
            {
                curr[1]=max(curr[1],intervals[i][1]);
            }
            else
            {
                add.push_back(curr);
                curr=intervals[i];
            }
        }
        add.push_back(curr);
        return add;

    }
};