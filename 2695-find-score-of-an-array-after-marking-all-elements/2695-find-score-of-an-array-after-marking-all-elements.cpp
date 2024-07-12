class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int x=0;x<nums.size();x++)
        {
            v.push_back({nums[x],x});
        }
        sort(v.begin(),v.end());
        map<int,int>mp;
        long long ans=0;
        for(int x=0;x<v.size();x++)
        {
            if(mp.find(v[x].second)==mp.end())
            {
                ans+=v[x].first;
                mp[v[x].second-1]=1;
                mp[v[x].second+1]=1;
            }
        }
        return ans;
    }
};