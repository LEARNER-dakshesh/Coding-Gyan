class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int mod=1e9+7;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x=0;x<nums.size();x++)
        {
            pq.push(nums[x]);
        }
        while(k>0)
        {
           int n1=pq.top();
           pq.pop();
           n1++;
           pq.push(n1);
            k--;
        }
        long long pro=1;

        while(!pq.empty())
        {
            cout<<pq.top();
            pro=pro*pq.top();
            pq.pop();
            pro=pro%mod;
        }
        return pro;
    }
};