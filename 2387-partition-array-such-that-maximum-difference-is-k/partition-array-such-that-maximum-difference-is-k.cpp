class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int start=0,c=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]-nums[start]>k)
            {
                start=x;
                c+=1;
            }
        }
        return c+1;
    }
};