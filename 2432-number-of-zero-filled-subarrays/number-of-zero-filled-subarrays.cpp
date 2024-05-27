class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long sum=0,cnt=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]==0)
            {
                cnt++;
            }
            else if(cnt>0 && nums[x]!=0)
            {
                sum+=((cnt)*(cnt+1))/2;
                cnt=0;
            }
        }
        if(cnt>0)
        {
            sum+=((cnt)*(cnt+1))/2;
        }
        return sum;

    }
};