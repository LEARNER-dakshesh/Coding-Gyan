class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=0,cnt=0;
        char ch=s[0];
     int i=0,j=1;
        while(j<s.size())
        {
            if(s[j]==ch+1)
            {
             cnt++;
             ch=s[j];
            }
            else{
                ans=max(ans,j-i);
                i=j;
                ch=s[i];
            }
            j++;
        }

        ans=max(ans,j-i);
        return ans;
    }
};