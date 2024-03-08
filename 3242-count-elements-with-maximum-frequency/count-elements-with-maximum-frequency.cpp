class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int x=0;x<nums.size();x++)
        {
            mp[nums[x]]++;
        }
        int maxa=0;
        for(auto x:mp)
        {
            if((x.second>maxa))
            {
                maxa=x.second;
            }
        }
        int cnt=0;
        for(auto x:mp)
        {
            if(x.second==maxa)
            {
                cnt+=x.second;
            }
        }
        return cnt;
    }
};