class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        map<int,int>mp;
        for(int x=0;x<spaces.size();x++)
        {
            mp[spaces[x]]++;
        }
        string res="";
        int present=0;
        for(int x=0;x<s.size();x++)
        {
            if(mp.find(x)!=mp.end() && present<spaces.size())
            {
                res+=" ";
                present++;
            }
            res+=s[x];
            cout<<res[x];
        }
        return res;
    }
};