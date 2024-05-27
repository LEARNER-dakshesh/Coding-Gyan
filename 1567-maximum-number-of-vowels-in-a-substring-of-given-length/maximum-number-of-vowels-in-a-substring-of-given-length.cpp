class Solution {
public:
    int maxVowels(string s, int k) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.size();
        int i = 0, j = 0, ans = 0, cnt = 0;
        int incr = 0;
       while(j<n)
       {
        if(s[j]=='a'  || s[j]=='e' ||s[j]=='i'  || s[j]=='o' || s[j]=='u')
        {
            cnt++;
        }
        if((j-i)+1>k)
        {
            while((j-i)+1>k)
            {
                if(s[i]=='a'  || s[i]=='e' ||s[i]=='i'  || s[i]=='o' || s[i]=='u')
                {
                    cnt--;
                }
                i++;
            }
        }
        if((j-i)+1==k)
        {
            ans=max(ans,cnt);
        }
        j++;
       }
        return ans;
    }
};