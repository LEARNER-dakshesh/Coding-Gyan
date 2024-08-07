class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        vector<int>pre(n);
        int curr=0;
        mp[0]=1;
        int cnt=0;
        for(int x=0;x<nums.size();x++)
        {
            curr+=nums[x]; 
            int val=curr%k;
            if(val<0)
            {
               val+=k;
            }
            if(mp.find(val)!=mp.end())
            {
                cnt+=mp[val];
            }
             mp[val]++;
        }
        return cnt;


    }
};