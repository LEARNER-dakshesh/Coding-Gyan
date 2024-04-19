class Solution {
public:
int dfs(  unordered_map<int,vector<int>>adj, vector<int>& quiet,vector<int>&ans,int node)
{
    int store_node=node;
    for(auto x: adj[node])
    {
        if(ans[x]!=-1)
        {
            if(quiet[ans[x]] < quiet[store_node])
            {
                store_node=ans[x];
            }
        }
        else {
           int res_node=dfs(adj,quiet,ans,x);
            if(quiet[res_node]<quiet[store_node])
            {
                store_node=res_node;
            }
        }
    }
    return ans[node]=store_node;
}
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<int>ans(n,-1);

        unordered_map<int,vector<int>>adj;
        for(int x=0;x<richer.size();x++)
        {
            adj[richer[x][1]].push_back(richer[x][0]);
        }
        for(int x=0;x<n;x++)
        {
            if(ans[x]==-1)
            {
                dfs(adj,quiet,ans,x);
            }
        }
        return ans;
    }
};