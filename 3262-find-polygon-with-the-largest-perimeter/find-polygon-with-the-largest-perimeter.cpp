class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
      
   sort(nums.begin(),nums.end());
        int n=nums.size();
        long long ans=0;
        vector<long long> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=2;i<n;i++){
            if(nums[i]<prefix[i-1]) ans=max(ans,prefix[i]);
        }
        if(ans==0) ans=-1;
        return ans;
    }
};