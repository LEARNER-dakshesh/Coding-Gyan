class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>res(n-k+1,-1);
        cout<<n-k+1<<endl;

        for(int x=0;x<(n-k+1);x++)
        {
            int flag=0;
            for(int y=x;y<x+k-1;y++)
            {
                if(nums[y]>=nums[y+1] || nums[y+1]>nums[y]+1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                res[x]=nums[x+k-1];
            }
        }

        return res;
    }
};