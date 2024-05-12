class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp1;
        for(int x=0;x<s1.size();x++)
        {
            mp1[s1[x]]++;
        }

        int i=0,j=0;
        unordered_map<char,int>mp2;
        while(j<s2.size())
        {
            mp2[s2[j]]++;

            if(abs(j-i+1)==s1.size())
            {
                int f=0;
                for(auto x:mp1)
                {
                    if(mp2.find(x.first)==mp2.end() || mp1[x.first]!=mp2[x.first])
                    {
                        f=1;
                        mp2[s2[i]]--;
                        if(mp2[x.first]==0)
                        {
                            mp2.erase(x.first);
                        }
                        i++;
                        break;
                    }
                }
                if(f==0)
                {
                    return true;
                }
            }
            j++;
        }
         if(abs(j-i+1)==s1.size())
            {
                int f=0;
                for(auto x:mp1)
                {
                    if(mp2.find(x.first)==mp2.end() || mp1[x.first]!=mp2[x.first])
                    {
                        f=1;
                        mp2[s2[i]]--;
                        if(mp2[x.first]==0)
                        {
                            mp2.erase(x.first);
                        }
                        i++;
                        break;
                    }
                }
                if(f==0)
                {
                    return true;
                }
            }
            return false;
    }
};