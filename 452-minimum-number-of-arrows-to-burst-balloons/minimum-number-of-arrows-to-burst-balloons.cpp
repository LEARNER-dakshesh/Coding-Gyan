class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end());
        int start=points[0][0];
        int end=points[0][1];
        for(int x=1;x<points.size();x++)
        {
           if(points[x][0]<=end)
           {
               cout<<points[x][1]<<endl;
            //    count++;
               end=min(points[x][1],end);
           }
           else
           {
               count++;
               start=points[x][0];
               end=points[x][1];
           }
        }
        return count;
    }
};