class Solution {
public:
    int minSteps(string s, string t) {
          map<char,int>mp1;
        map<char,int>mp2;
        for(int x=0;x<s.size();x++)
        {
            mp1[s[x]]++;
        }
        for(int x=0;x<t.size();x++)
        {
            mp2[t[x]]++;
        }
        int cnt=0;
        for(auto x:mp1)
        {
            if(mp2.find(x.first)!=mp2.end())
            {  if(mp2[x.first]<mp1[x.first])
              {
                  cnt+=mp1[x.first]-mp2[x.first];
              }
            }
            else{
                cnt+=x.second;
            }
        }
        for(auto x:mp2)
        {
            if(mp1.find(x.first)!=mp1.end())
            {  if(mp1[x.first]<mp2[x.first])
              {
                  cnt+=mp2[x.first]-mp1[x.first];
              }
            }
            else{
                cnt+=x.second;
            }
        }
        return cnt;
    }
};