class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>s;
        for(int x=0;x<nums.size();x++)
        {
            if(s.count(nums[x])>0)
            {
                return nums[x];
            }
            else
            {
                s.insert(nums[x]);
            }
        }
        return 0;
    }
};