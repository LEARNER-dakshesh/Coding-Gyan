class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;

        for(int x=0;x<strs.size();x++)
        {
             string s=strs[x];
             sort(strs[x].begin(),strs[x].end());
             mp[strs[x]].push_back(s);
        }
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};