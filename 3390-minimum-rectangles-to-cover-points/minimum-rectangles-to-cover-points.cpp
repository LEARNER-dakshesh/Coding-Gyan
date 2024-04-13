class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
    sort(points.begin(),points.end());
        int mini=points[0][0];
        
        int c=1;
        for(int x=1;x<points.size();x++)
        {
            if((points[x][0]-mini)>w)
            {
                c++;
                mini=points[x][0];
            }
        }
        return c;
    }
};