class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]<10)
            {
                cnt1+=nums[x];
            }
            else{
                cnt2+=nums[x];
            }
        }
        if(cnt1>cnt2)
        {
            return true;
        }
        if(cnt2>cnt1)
        {
            return true;
        }
        return false;
    }
};