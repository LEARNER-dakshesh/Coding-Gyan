class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>v(rooms.size(),false);
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int key_room=q.front();
            q.pop();
            v[key_room]=true;
            for(auto it: rooms[key_room])
            {
                if(v[it]==false)
                {
                    v[it]=true;
                    q.push(it);
                }
            }
        }
       return count(v.begin(), v.end(), true ) == rooms.size();

    }
};