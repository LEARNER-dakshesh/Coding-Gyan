class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        
       int n=nums.size();
        vector<int>cnt(nums.size()+1,0);
            for(auto &v : requests)
            cnt[v[0]]++, cnt[v[1]+1]--;
        for(int i=1; i<=n; i++) cnt[i]+=cnt[i-1];

        
        priority_queue<pair<int,int>>pq;
        for(int x=0;x<cnt.size();x++)
        {
            pq.push({cnt[x],x});
        }
        sort(nums.rbegin(),nums.rend());
      
        long long c=0;
        long long calc=0;
        while(!pq.empty())
        {
            // cout<<pq.top().first<<" "<<pq.top().second<<endl;
            if(pq.top().first>0)
            {
            calc += ((static_cast<long long>(pq.top().first)) * nums[c]) % 1000000007;
            c++;
            }
            pq.pop();
        }

     return calc%1000000007;
    }
};