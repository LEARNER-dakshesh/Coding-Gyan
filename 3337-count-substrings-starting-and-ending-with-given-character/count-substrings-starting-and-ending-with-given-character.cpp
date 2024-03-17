class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long cnt=0;
        for(int x=0;x<s.size();x++)
        {
            if(s[x]==c)
            {
                cnt++;
            }
        }
        long long store=(cnt*(cnt+1))/2;
        return store;
    }
};