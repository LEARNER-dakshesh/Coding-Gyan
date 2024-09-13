class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        vector<int>preSum(n), suffixSum(n);

        preSum[0]=nums[0];
        for (int x=1;x<n;x++) {
            preSum[x]=preSum[x-1]+nums[x];
        }
 
        suffixSum[n-1]=nums[n-1];
        for (int x=n-2;x>=0;x--) {
            suffixSum[x]=suffixSum[x+1]+nums[x];
        }

        for (int x = 0; x < n; x++) {
            int prefix = (x>0) ? (x * nums[x]-preSum[x-1]) : 0;
            int suffix = (x < n - 1) ? (suffixSum[x+1]-(n-x-1)*nums[x]) : 0;
            res[x] = prefix + suffix;
        }

        return res;
    }
};
