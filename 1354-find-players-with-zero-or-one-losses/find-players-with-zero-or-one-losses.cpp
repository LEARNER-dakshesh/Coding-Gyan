class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>v;
        map<int,int>m;
        for(int x=0;x<matches.size();x++)
        {
            m[matches[x][1]]++;
        }
        map<int,int>m1;
         for(int x=0;x<matches.size();x++)
        {
            m1[matches[x][0]]++;
         }
        vector<int>v1;
        vector<int>v2;
        for(auto x: m)
        {
            if(x.second==1)
            {
                v1.push_back(x.first);
            }
        }
        for(auto x:m1)
        {
            if (m.find(x.first)==m.end()){
                v2.push_back(x.first);
            }
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        v.push_back(v2);
        v.push_back(v1);
        return v;
        
        
    }
};