class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int k) {
        int ans=INT_MAX;
        set<int>st;
        for(int x=k;x<nums.size();x++)
        {
            st.insert(nums[x-k]);
            auto it=st.lower_bound(nums[x]);

            if(it!=st.end())
            {
                ans=min(ans,abs(*it-nums[x]));
            }

            if(it!=st.begin())
            {
                --it;
                ans=min(ans,abs(*it-nums[x]));
            }
        }
        return ans;
    }
};