class Solution {
public:
bool calc(vector<int>&nums,int mid,int k)
{
    int c=0;
    for(int x=0;x<nums.size();x++)
    {
    if(nums[x]<=mid)
    {x++;
        c++;
    }
    }
    return (c>=k)?true:false;
}
    int minCapability(vector<int>& nums, int k) {
        int low=1,high=1e9,ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(calc(nums,mid,k)==true)
            {

             ans=min(ans,mid);
             high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};