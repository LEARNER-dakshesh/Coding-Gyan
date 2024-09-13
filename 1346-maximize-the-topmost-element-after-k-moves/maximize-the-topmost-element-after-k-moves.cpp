class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if((k%2==1 && nums.size()==1) || (k>=0 && nums.size()==0))
        {
            return -1;
        }
        if(k>nums.size())
        {
            return *max_element(nums.begin(),nums.end());
        }
        int maxa=0;
        int n=nums.size();
        int moves=min(k,n);
        for(int x=0;x<moves-1;x++)
        {
            if(nums[x]>=maxa)
            {
                maxa=nums[x];
            }
        }
        if(k<nums.size())
        {
           auto pos = nums.begin() + k;
           int nk=*pos;
            return max(maxa,nk);
        }
        return maxa;
    }
};