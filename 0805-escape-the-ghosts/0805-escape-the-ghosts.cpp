class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int final=0;
        if(target[1]>0)
        {
            final+=target[1]-0;
        }
        else{
            final+=0-target[1];
        }
        if(target[0]>0)
        {
            final+=target[0]-0;
        }
        else{
            final+=0-target[0];
        }

        vector<int>v;
        for(int x=0;x<ghosts.size();x++)
        {
            int calcx,calcy;
            if(target[0]>ghosts[x][0])
            {
                calcx=(target[0]-ghosts[x][0]);
            }
            else{
                calcx=(ghosts[x][0]-target[0]);
            }
            if(target[1]>ghosts[x][1])
            {
                calcy=(target[1]-ghosts[x][1]);
            }
            else{
                calcy=(ghosts[x][1]-target[1]); 
            }
            int tot=calcx+calcy;
            v.push_back(tot);
        }
        sort(v.begin(),v.end());
        for(int x=0;x<v.size();x++)
        {
            cout<<v[x]<<" ";
        }
        return final<v[0];
    }
};