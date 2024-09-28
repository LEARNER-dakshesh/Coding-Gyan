class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(),rides.end(),greater<vector<int>>());

        map<long long,long long>mp;
        mp[INT_MAX]=0;
        long long ans=0;

        for(int x=0;x<rides.size();x++)
        {

            long long pro_skip=mp.lower_bound(rides[x][0])->second;
            long long take_pro=mp.lower_bound(rides[x][1])->second+rides[x][1]-rides[x][0]+rides[x][2];

            mp[rides[x][0]]=max(pro_skip,take_pro);

            ans=max(ans,take_pro);

        }

        return ans;
        
    }
};