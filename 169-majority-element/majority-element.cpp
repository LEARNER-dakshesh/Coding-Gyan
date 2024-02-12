class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int major=nums[0];
      int count=1;
      for(int x=1;x<nums.size();x++)
      {
          if(nums[x]==major)
          {
              count++;
          }
          else if(count>0)
          {
              count--;
          }
          else if(count==0)
          {
              major=nums[x];
              count=1;
          }
      }
      return major;
    }
};