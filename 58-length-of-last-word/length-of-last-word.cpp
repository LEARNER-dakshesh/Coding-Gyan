class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int x=s.length()-1;x>=0;x--)
        {
            if(s[x]!=' ')
            {
                len++;
            }
            if(s[x]==' '&& len>0)
            {
                break;
            }
        }return len;
    }
};