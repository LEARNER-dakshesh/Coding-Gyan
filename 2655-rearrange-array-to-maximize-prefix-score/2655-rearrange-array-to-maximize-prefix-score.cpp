class Solution {
public:
    int maxScore(vector<int>& nums) {
       int n=nums.size();
       sort(nums.rbegin(),nums.rend());
       int sum=0;
 
        vector<long long>pre(n);
        pre[0]=nums[0];
       for(int x=1;x<nums.size();x++)
       {
          pre[x]=pre[x-1]+nums[x];
       }

       int ans=0;
       for(int x=0;x<n;x++)
       {
          if(pre[x]>0)
          {
            ans++;
          }
       }
       return ans;
    }
};