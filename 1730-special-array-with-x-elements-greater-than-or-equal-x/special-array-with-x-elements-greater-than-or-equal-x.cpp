class Solution {
public:
    int specialArray(vector<int>& nums) {
        int maxa=*max_element(nums.begin(),nums.end());
        for(int x=0;x<=maxa;x++)
        {
            int cnt=0;
            for(int y=0;y<nums.size();y++)
            {
            if(nums[y]>=x)
            {
                cnt++;
            }
            }
            if(cnt==x)
            {
                return x;
            }
        }
        return -1;
    }
};