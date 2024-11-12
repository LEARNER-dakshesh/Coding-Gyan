class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long n=nums.size();
        int maxa=nums[0];
        vector<long long>prefix(n);

        for(int x=0;x<nums.size();x++)
        {
            maxa=max(maxa,nums[x]);
            prefix[x]=nums[x]+maxa;
        }
        vector<long long>res(n);
        res[0]=prefix[0];
        // cout<<prefix[0]<<" ";
        for(int x=1;x<n;x++)
        {
            // cout<<prefix[x]<<" ";
            res[x]=(prefix[x]+res[x-1]);
        }
        return res;
    }
};