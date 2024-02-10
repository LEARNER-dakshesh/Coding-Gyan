class Solution {
public:
int firstOccur(vector<int>nums,int target)
{
    int l=0;
    int h=nums.size()-1;
    int fo=-1;
    while(l<=h)
    {
         int mid=(l+h)/2;
         if(nums[mid]>target)
         {
             h=mid-1;
         }
         else if(nums[mid]<target)
         {
             l=mid+1;
         }
         else
         {
             fo=mid;
             h=mid-1;
         }
    }
      return fo;
}
int lastOccur(vector<int>nums,int target)
{
    
    int l=0;
    int h=nums.size()-1;
    int lo=-1;
    while(l<=h)
    {
         int mid=(l+h)/2;
         if(nums[mid]>target)
         {
             h=mid-1;
         }
         else if(nums[mid]<target)
         {
             l=mid+1;
         }
         else
         {
             lo=mid;
             l=mid+1;
         }
    }
      return lo;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=firstOccur(nums,target);
        int l=lastOccur(nums,target);

        return {f,l};
    }
};