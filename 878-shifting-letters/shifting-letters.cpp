class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long  total=accumulate(shifts.begin(),shifts.end(),0LL);
            int n=shifts.size();
        reverse(shifts.begin(),shifts.end());
        for(int x=0;x<shifts.size();x++)
        {
            shifts[x]=shifts[x]%26;
        }
        vector<long long>prefix(shifts.size(),0);
        prefix[0]=shifts[0];
         for(int x=1;x<shifts.size();x++)
         {
            prefix[x]=prefix[x-1]+shifts[x];
         }
        reverse(prefix.begin(),prefix.end());
        for(int x=0;x<prefix.size();x++)
        {
            prefix[x]=prefix[x]%26;
            int dist=123-s[x];
            if(prefix[x]<dist)
            {
            s[x]=s[x]+prefix[x];
            }
            else{
                prefix[x]-=dist;
                s[x]='a'+prefix[x];
            }
        }
        return s;

    }
};