class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long  n=nums.size();
        vector<long long >pre(n+1,0);
        for(int x=1;x<nums.size();x++)
        {
            pre[x]=pre[x-1]+nums[x-1];
        }

        vector<long long >suff(n+1,0);
        for(int x=n-1;x>=0;x--)
        {
            suff[x]=suff[x+1]+nums[x];
        }

        // for(int x=0;x<pre.size();x++)
        // {
        //     cout<<pre[x]<<" ";
        // }cout<<endl;

        // for(int x=0;x<suff.size();x++)
        // {
        //     cout<<suff[x]<<" ";
        // }cout<<endl;

        long long cnt=0;
        for(int x=1;x<pre.size()-1;x++)
        {
            if(pre[x]>=suff[x])
            {
                cnt++;
            }
        }
        return cnt;
    }
};