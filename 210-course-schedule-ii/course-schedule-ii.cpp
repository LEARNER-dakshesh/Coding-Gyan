class Solution {
public:
bool hascycle=false;

    void dfsRec(int u,unordered_map<int,vector<int>>&mp,vector<bool>&inRec, vector<bool>&visited, stack<int>&st)
    {

        visited[u]=true;
        inRec[u]=true;

        for(auto v:mp[u])
        {
            if(inRec[v]==true)
            {
                hascycle=true;
                return ;
            }
            if(!visited[v])
            {
                dfsRec(v,mp,inRec,visited,st);
            }
        }

        st.push(u);
        inRec[u]=false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& graph) {
        stack<int>st;
        vector<bool>inRec(n,false);
        vector<bool>visited(n,false);

        unordered_map<int,vector<int>>mp;
        for(auto v:graph)
        {
            int a=v[0];
            int b=v[1];
            mp[b].push_back(a);
        }

        for(int x=0;x<n;x++)
        {
            if(!visited[x])
            {
                dfsRec(x,mp,inRec,visited,st);
            }
        }

        if(hascycle==true)
        {
            return {};
        }

        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};