class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int even=0,odd=0;
        for(int x=0;x<nums.size()-1;x++)
        {
            if(x%2==0 )
            {
                even=max(even+nums[x],odd);
            }
            else
            {
                odd=max(odd+nums[x],even);
            }
        }
        int maxa1=max(even,odd);
        int even1=0,odd1=0;
        for(int x=1;x<nums.size();x++)
        {
            if(x%2==0 )
            {
                even1=max(even1+nums[x],odd1);
            }
            else
            {
                odd1=max(odd1+nums[x],even1);
            }
        }
        int maxa2=max(even1,odd1);
        return max(maxa1,maxa2);

    }
};