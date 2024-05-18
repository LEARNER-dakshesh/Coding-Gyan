class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int x=1;x<nums.size();x++)
        {
            cnt+=nums[x]-nums[0];
        }
        return cnt;
    }
};