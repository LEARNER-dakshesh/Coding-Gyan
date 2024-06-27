class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
    //  vector<vector<int>>adj(n+5,0);
    //  for(int x=0;x<edges.size();x++)
    //  {
    //    adj[edges[x][0]].push_back(edges[x][1]);
    //    adj[edges[x][1]].push_back(edges[x][0]);
    //  }
    //  for(int x=1;x<n;x++)
    //  {
    //     cout<<adj[x][0]<<"-->";
    //     for(int y=0;y<adj[x].size();y++)
    //     {
    //       cout<<adj[x][y]<<" ";
    //     }
    //     cout<<endl;
    //     if(adj[x].size()==n)
    //     {
    //         return adj[x][0];
    //     }
    //  }
    // //  for(int i=0;i<n+1;i++)
    // //  {
    // //     if(adj[i].size()==n)
    // //     {
    // //         return adj[i][0];
    // //     }
    // //  }
    //  return -1;
    unordered_map<int,int>mp;
    for(int x=0;x<n;x++)
    {
      mp[edges[x][0]]++;
      mp[edges[x][1]]++;
    }
    for(auto x:mp)
    {
        if(x.second>1)
        {
            return x.first;
        }
        // cout<<x.first<<" "<<x.second<<endl;
    }
    return 01;
    }
};