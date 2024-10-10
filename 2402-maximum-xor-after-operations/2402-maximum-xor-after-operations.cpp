class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans=0;
        for(int x=0;x<nums.size();x++)
        {
            ans=ans | nums[x];
        }
        return ans;
    }
};