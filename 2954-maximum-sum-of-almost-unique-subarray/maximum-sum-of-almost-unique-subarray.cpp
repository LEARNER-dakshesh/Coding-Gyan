class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long sum=0;
        int i=0,j=0;
        unordered_map<int,int>mp;
        long long currsum=0;
        while(j<nums.size())
        {
           mp[nums[j]]++;
           currsum+=nums[j];
           if(mp.size()>=m && ((j-i)+1)>=k)
           {
            while(((j-i)+1)>k)
            {
                currsum-=nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                {
                    mp.erase(nums[i]);
                }
                i++;
            }
            if(mp.size()>=m)
            {
            sum=max(sum,currsum);
            }
           }
           j++;
        }
          
        return sum;
    }
};