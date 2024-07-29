class Solution {
public:
    int numTeams(vector<int>& nums) {
        int n=nums.size();
       int ans=0;
        for(int x=0;x<nums.size()-1;x++)
        {
            int smaller=0,greater=0;
            for(int y=0;y<x;y++)
            {
                if(nums[y]<nums[x])
                {
                    smaller++;
                }
            }
            for(int z=x+1;z<nums.size();z++)
            {
                if(nums[z]>nums[x])
                {
                    greater++;
                }
            }
        
        ans+=smaller*greater;
        }
       cout<<ans;

        for(int x=0;x<n-1;x++)
        {
           int smaller=0,greater=0;
            for(int y=0;y<x;y++)
            {
                if(nums[y]>nums[x])
                {
                    greater++;
                }
            }
            for(int z=x+1;z<n;z++)
            {
                if(nums[z]<nums[x])
                {
                    smaller++;
                }
            }
            ans+=smaller*greater;
        }

        return ans;
    }
};