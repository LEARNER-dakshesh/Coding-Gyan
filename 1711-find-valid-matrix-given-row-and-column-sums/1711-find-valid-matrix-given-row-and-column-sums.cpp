class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();

        vector<vector<int>>ans(n,vector<int>(m,0));  
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<m;y++)
            {
                ans[x][y]=min(rowSum[x],colSum[y]);
                rowSum[x]-=ans[x][y];
                colSum[y]-=ans[x][y];
            }
        }
        return ans;
    }
};