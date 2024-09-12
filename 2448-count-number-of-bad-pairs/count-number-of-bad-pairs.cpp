class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
       long long n=nums.size();
       unordered_map<long long,long long>mp;
       long long ans=0;
       for(int x=0;x<nums.size();x++)
       {
        long long diff=x-nums[x];
        if(mp.find(diff)!=mp.end())
        {
            ans+=mp[diff];
        }
        mp[diff]++;
       }

       long long totpairs=(n*(n-1))/2;
    //    cout<<totpairs<<endl;
       return totpairs-ans;
      
    }
};