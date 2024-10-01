class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        unordered_map<int,int>mp;
        int cnt=0;

        for(int x=0;x<time.size();x++)
        {
            if(mp.find((60-(time[x]%60))%60)!=mp.end())
            {
               cnt+=mp[(60-(time[x]%60))%60];
            }
            mp[time[x]%60]++;
        }
        return cnt;
    }
};