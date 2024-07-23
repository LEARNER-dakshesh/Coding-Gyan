class Solution {
public:
    bool doesAliceWin(string s) {
        int n=s.size();
        int cnt=0;
        for(int x=0;x<s.size();x++)
        {
            if(s[x]=='a' || s[x]=='e' || s[x]=='i' || s[x]=='o' || s[x]=='u')
            {
                cnt++;
            }
        }
         if (cnt==0 ) {
            return false;
        }
        return cnt>0?true:false;
    }
};