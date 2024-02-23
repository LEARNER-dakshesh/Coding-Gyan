class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int x=1;x<nums.size();x++)
        {
            while(nums[x]<nums[x-1] || nums[x]==nums[x-1])
            {
                nums[x]=nums[x]+1;
                cnt++;
            }
        }
        return cnt;
    }
};