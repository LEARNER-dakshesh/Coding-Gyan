class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        vector<long long>pre(n);
        pre[0]=nums[0];
        for(int x=1;x<nums.size();x++)
        {
            pre[x]=pre[x-1]+nums[x];
        }

        vector<long long>res;
        for(int x=0;x<queries.size();x++)
        {
            int ind=lower_bound(nums.begin(),nums.end(),queries[x])-nums.begin();
           long long incr=0,decr=0;
           if (ind > 0) incr=(long long)ind*queries[x]- pre[ind-1];
           if (ind < n) decr=(pre[n-1]-(ind > 0 ? pre[ind - 1] : 0))-(long long)queries[x]*(n-ind);
            
            long long ans=incr+decr;
            res.push_back(ans);
        }

        return res;
    }
};