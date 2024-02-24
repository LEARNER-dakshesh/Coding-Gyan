class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int tot=0,c=0;
        for(int x=rungs.size()-1;x>=1;x--)
        {
            int calc=rungs[x]-rungs[x-1];
            if(calc>dist)
            {
            tot+=(calc-1)/dist;
            }
        }
     
        int calc=rungs[0]-0;
        if(calc>dist)
        {
        tot+=(calc-1)/dist;
        }
        return tot;
    }
};