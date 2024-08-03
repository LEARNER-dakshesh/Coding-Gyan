class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt1=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]==1)
            {
                cnt1++;
            }
        }
        int n=nums.size();
        vector<int>v(2*n);

        for(int x=0;x<2*n;x++)
        {
            v[x]=nums[x%n];
        }
        int ans=cnt1;
        int wind_size=0,zero=0,i=0;
        for(int x=0;x<v.size();x++)
        {
            wind_size++;
            if(v[x]==0)
            {
                zero++;
            }
            if(wind_size==cnt1)
            {
                ans=min(ans,zero);
                if(v[i]==0){
                    zero--;
                }
                i++;
                wind_size--;
            }
        }
        return ans;
    }
};