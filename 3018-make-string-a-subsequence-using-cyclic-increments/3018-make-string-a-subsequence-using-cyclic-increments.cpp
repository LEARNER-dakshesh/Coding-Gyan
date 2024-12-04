class Solution {
public:
    bool canMakeSubsequence(string str, string str2) {
        int index=0;
        for(int x=0;x<str.size();x++)
        {
            if(index<str2.size())
            {
                if(str[x]==str2[index] || char(((str[x]-'a'+1)%26)+'a') == str2[index])
                {
                    index++;
                }
                if(index==str2.size())
                {
                    return true;
                }
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};