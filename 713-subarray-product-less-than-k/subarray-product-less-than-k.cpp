class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0,pro=1,cnt=0;
        while(j<nums.size())
        {
            pro=pro*nums[j];
            if(pro>=k)
            {
                while(pro>=k && i<=j)
                {
                    pro=pro/nums[i];
                    i++;
                }  
            } 
            int n=j-i+1;
            cnt+=n;
            j++;
        }
       
        return cnt;
    }
};