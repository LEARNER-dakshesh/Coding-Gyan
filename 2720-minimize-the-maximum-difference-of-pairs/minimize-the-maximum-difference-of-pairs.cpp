class Solution {
public:
bool check(vector<int>&nums,int diff,int p)
{
    int count=0,x=0;
   while(x<nums.size()-1)
   {
         if(nums[x+1]-nums[x]<=diff)
         {
             x=x+2;
             count++;
         }
         else{
             x++;
         }
    }
    return count>=p;
}
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int low=0,high=INT_MAX,ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(nums,mid,p))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};