class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int inc=0,dec=s.size();
        for(int x=0;x<s.size();x++)
        {
            if(s[x]=='I')
            {
                ans.push_back(inc);
                inc++;
            }
            else if(s[x]=='D')
            {
                ans.push_back(dec);
                dec--;
            }
        }
        ans.push_back(inc);
        return ans;
    }
};