class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         if(n==1)
        {
            return 1;
        }
        int trusts[n];
        int trusted[n];
        memset(trusts,0,sizeof(trusts));
        memset(trusted,0,sizeof(trusted));
       
        for(int x=0;x<trust.size();x++)
        {
            trusts[trust[x][0]-1]++;
            trusted[trust[x][1]-1]++;
        }
        for(int x=0;x<n;x++)
        {
            if(trusts[x]==0 && trusted[x]==n-1){
                return x+1;
            }
        }
        return -1;
    }
};