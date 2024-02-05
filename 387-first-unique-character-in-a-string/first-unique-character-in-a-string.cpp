class Solution {
public:
    int firstUniqChar(string s) {
        int indx=0;
        map<int,int>m;
        for(int x=0;x<s.size();x++)
        {
            m[s[x]]++;
            if(m[s[indx]]>1)
            {
                indx++;
            while(indx<s.size() && m[s[indx]]>1)
            {
                indx++;
            }
            }
            if(indx==s.size())
            {
                return -1;
            }
        }
        return indx;
    }
};