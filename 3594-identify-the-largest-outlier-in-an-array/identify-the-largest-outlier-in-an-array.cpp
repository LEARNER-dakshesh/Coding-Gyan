class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int size=nums.size();
        map<int,int>mp;
        for(int x=0;x<nums.size();x++)
            {
                mp[nums[x]]++;
            }
        vector<int>v;
        long long total=accumulate(nums.begin(),nums.end(),0LL);
        for(int  x=0;x<nums.size();x++)
        {
            int val=total-(2*nums[x]);
            if(val == nums[x])
            {
                if(mp[val]>1)
                {
                    v.push_back(total-2*nums[x]);
                }
                
            }
            else
            {
               if(mp[val]>0)
               {
                   v.push_back(val);
               }
            }
        }
        return *max_element(v.begin(),v.end());
    }
};