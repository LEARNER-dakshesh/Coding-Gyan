class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=0,cnt=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]<0)
            {
                sum-=-nums[x];
            }
            else{
                sum+=nums[x];
            }
            if(sum==0)
            {
                cnt++;
            }
            cout<<sum<<" ";
        }
        return cnt;
    }
};