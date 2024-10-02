class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        map<int,set<int>>mp;
        for(int x=0;x<points.size();x++)
        {
            mp[points[x][0]].insert(points[x][1]);
        }

        int ans=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];

                if(x1!=x2 && y1!=y2)
                {
                    if(mp[x1].count(y2) && mp[x2].count(y1))
                    {
                        ans=min(ans,(abs(x2-x1)*abs(y2-y1)));
                    }
                }
            }
        }
        return ans==INT_MAX? 0:ans;
   }
};