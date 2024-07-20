class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        for(int x=0;x<nums.size();x++)
        {
            mp[nums[x]]++;
        }
        vector<int>ans;
        for(int x=0;x<nums.size();x++)
        {
            if(mp.find(nums[x]+1)==mp.end() && mp.find(nums[x]-1)==mp.end() && mp[nums[x]]==1)
            {
                ans.push_back(nums[x]);
            }
        }
        return ans;
    }
};