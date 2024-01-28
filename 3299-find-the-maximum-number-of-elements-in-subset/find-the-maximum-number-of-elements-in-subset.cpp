class Solution {
public:
    int maximumLength(vector<int>& nums) {
        long long maxa = 0;
        map<long, long> mp;
        for (int x = 0; x < nums.size(); x++) {
            mp[nums[x]]++;
        }
        for(auto x:mp)
        {
            long long target=x.first;
            long long count=0;
            while(target)
            {
                if(mp.find(target)!=mp.end() && mp[target]>=2)
                {
                    count+=2;
                    mp[target]-=2;
                    target=target*target;
                }
                else if(mp.find(target)!=mp.end() && mp[target]==1)
                {
                    count+=1;
                    // target=pow(target,2);
                    mp[target]-=1;
                   break;
                }
                else{
                    break;
                }
            }
            if(count%2==1)
            {           
                 maxa=max(maxa,count);
            }
            else{
                maxa=max(maxa,count-1);
            }
        }
        
        return maxa;

        
    }
};