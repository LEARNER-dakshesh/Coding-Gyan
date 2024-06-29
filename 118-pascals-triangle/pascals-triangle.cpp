class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int x=0;x<numRows;x++)
        {
            vector<int>res(x+1,1);
            for(int y=1;y<x;y++)
            {
            res[y]=ans[x-1][y]+ans[x-1][y-1];
            }
            ans.push_back(res);
        }
        return ans;
    }
};