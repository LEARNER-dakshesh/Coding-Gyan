class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()<=4)
        {
            return 0;  
        }
        sort(nums.begin(),nums.end());

        int calc1=nums[n-4]-nums[0];
        int calc2=nums[n-1]-nums[3];
        int calc3=nums[n-2]-nums[2];
        int calc4=nums[n-3]-nums[1];

        return min(calc1,min(calc2,min(calc3,calc4)));
    }
};