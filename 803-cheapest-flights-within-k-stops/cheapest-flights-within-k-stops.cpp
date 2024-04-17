class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(int x=0;x<flights.size();x++)
        {
            adj[flights[x][0]].push_back({flights[x][1],flights[x][2]});
        }

        vector<int>price(n,INT_MAX);
        price[src]=0;
        queue<pair<int,pair<int,int>>>pq;

        pq.push({src,{0,0}});

        while(!pq.empty())
        {
            int node=pq.front().first;
            int step=pq.front().second.first;
            int cost=pq.front().second.second;
            pq.pop();

            for(auto it : adj[node])
            {
                int newnode=it.first;
                int cost_newnode=it.second;
                if(cost_newnode+cost<price[newnode] && step<=k)
                {
                 price[newnode]=cost_newnode+cost;
                 pq.push({newnode,{step+1,cost_newnode+cost}});
                }
            }
        }

          if(price[dst]==INT_MAX)
          {
            return -1;
          }
          return price[dst];



    }
};