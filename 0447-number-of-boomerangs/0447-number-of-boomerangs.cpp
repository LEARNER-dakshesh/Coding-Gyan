class Solution {
public:
 int numberOfBoomerangs(vector<vector<int>>& points)  {
     map<int, unordered_map<int, int>> mp;
    int res = 0;

    for (int x=0;x<points.size();x++) {
        for (int y=0;y<points.size();y++) {
            if (x == y) continue; 
            
            int x1 = points[x][0], y1 = points[x][1];
            int x2 = points[y][0], y2 = points[y][1];

            int dist = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

            mp[x][dist]++;
        }
        for (auto& [dist, count] : mp[x]) {
            res+=count*(count-1);
        }
    }

    return res;
}
};
