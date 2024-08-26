class Solution {
public:
bool checkCycle(vector<vector<int>>& graph, int u, vector<bool>&visited,vector<bool>&inRecur)
{
    visited[u]=true;
    inRecur[u]=true;

    for(auto v:graph[u])
    {
        if(!visited[v])
        {
            if(checkCycle(graph,v,visited,inRecur))
            {
                return true;
            }
           
        } 
        else if(inRecur[v]==true)
            {
                return true;
            }
    }
    inRecur[u]=false;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>visited(n,false);
        vector<bool>inRecur(n,false);

        for(int x=0;x<n;x++)
        {
            if(!visited[x])
            {
                bool ans=checkCycle(graph,x,visited,inRecur);
            }
        }
        vector<int>ans;
        for(int x=0;x<inRecur.size();x++)
        {
            if(inRecur[x]==false)
            {
                ans.push_back(x);
            }
        }
        return ans;

    }
};