class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0,cnt=0;
        while(i<s.size())
        {
            if(s[i]==t[j])
            {
                cnt++;
                j++;
            }
            i++;
        }
        return t.size()-j;
    }
};