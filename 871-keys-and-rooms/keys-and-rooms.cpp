class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int >visited;
        queue<int> q;
        q.push(0);
        while(q.size()>0)
        {
            int curr=q.front();
            visited.insert(curr);
            q.pop();

            for(int neighbour : rooms[curr])
            {
                if(visited.count(neighbour)==0)
                {
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
        if(visited.size()==rooms.size())
        return true;
        else
        return false;
    }
};