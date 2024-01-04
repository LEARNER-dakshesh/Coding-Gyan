class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(int x=0;x<order.size();x++)
        {
            mp[order[x]]++;
        }
        string found="",n_f="";
        for(int x=0;x<s.size();x++)
        {
            if(mp.find(s[x])==mp.end())
            {
                n_f+=s[x];
            }
            else{
                found+=s[x];
            }
        }
        string final="";
        for(int x=0;x<order.size();x++)
        {
            for(int y=0;y<found.size();y++)
            {
                if(order[x]==found[y])
                {
                    final+=order[x];
                }
            }
        }
        final+=n_f;
        return final;
    }
};