class Solution {
public:
    int minChanges(string s) {
        int res=0;
        for(int x=0;x<s.size();x=x+2)
        {
            if(s[x]!=s[x+1])
            {
                res+=1;
            }
        }
        return res;
    }
};