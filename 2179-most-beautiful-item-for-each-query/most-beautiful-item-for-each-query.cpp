class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<int>result;
        map<int,int>mp;
        int maxa=0;
        for(int x=0;x<items.size();x++)
        {
            mp[items[x][0]]=max(items[x][1],maxa);
            maxa=max(items[x][1],maxa);
        }
        for(int x=0;x<queries.size();x++)
        {
            auto cost=mp.upper_bound(queries[x]);
            if(cost==mp.begin())
            {
                result.push_back(0);
            }
            else
            {
            result.push_back(prev(cost)->second);
            }
        }
        return result;

    }
};