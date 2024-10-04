class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        int tot_final=n/2;

        long long sum=accumulate(skill.begin(),skill.end(),0LL);
        if(sum%tot_final != 0)
        {
            return -1;
        }
        int target=sum/tot_final;

        unordered_map<int,int>mp;
        for(int x=0;x<skill.size();x++)
        {
            mp[skill[x]]++;
        }

        long long ans=0;
        for(auto x:mp)
        {
            if (mp[x.first] == 0) continue; 
                    while(mp[x.first]>0)
                    {
                    long long need=target-x.first;
                    if(mp[need]>0)
                    {
                        ans+=1LL*need*x.first;
                        mp[need]--;
                        mp[x.first]--;
                    }
                    else{
                        return -1;
                    }
                    }
        }

        return ans;


    }
};