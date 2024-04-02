class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,count=0;
        map<int,int>mp;
        mp[0]=1;
       for(int x=0;x<nums.size();x++)
       {
        sum+=nums[x];
        if(mp[sum-goal])
        {
            count+=mp[sum-goal];
        }
        mp[sum]++;
       }
       return count;
    }
};