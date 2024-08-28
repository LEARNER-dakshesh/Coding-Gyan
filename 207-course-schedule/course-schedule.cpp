class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);  
        vector<bool> visited(n, false);
        vector<bool> InRecur(n, false);

        for (auto v : pre) {
            adj[v[1]].push_back(v[0]);
        }

        for (int i=0;i<n;i++) {
            if (!visited[i]) {
                if (dfsRec(i, visited, InRecur, adj)) {
                    return false; 
                }
            }
        }
        return true;  
    }

    bool dfsRec(int u, vector<bool>& visited, vector<bool>& inRecursion, vector<vector<int>>& adj) {
        visited[u] = true;
        inRecursion[u] = true;

        for (auto v:adj[u]) 
        {
            if (!visited[v]) 
            {
                if (dfsRec(v, visited, inRecursion, adj)) 
                {
                    return true;  
                }
            } 
            else if (inRecursion[v])
            {
                return true;  
            }
        }

        inRecursion[u] = false;
        return false; 
    }
};
