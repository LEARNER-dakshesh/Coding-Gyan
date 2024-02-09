class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size()-1;
        int lastpos=size;
        for(int x=size-1;x>=0;x--)
        {
        //  if(x<size)
        //  {
        //      return true;
        //  }   
            if(x+nums[x]>=lastpos)
            {
                lastpos=x;
            }
        }
        return lastpos==0;
    }
};