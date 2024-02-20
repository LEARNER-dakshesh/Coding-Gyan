class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int c=0;
        // sort(nums.begin(),nums.end());
        // for(int x=0;x<nums.size();x++)
        // {
        //     if(c!=nums[x])
        //     {
        //         return c;
        //     }
        //     else{
        //     c++;
        //     }
        // }
        // return c;
        int tot=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        return (n*(n+1))/2-tot;
    }
};