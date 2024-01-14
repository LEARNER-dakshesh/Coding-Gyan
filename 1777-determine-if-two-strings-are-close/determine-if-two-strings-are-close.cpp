class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int x=0;x<word1.size();x++)
        {
            mp1[word1[x]]++;
        }
        for(int x=0;x<word2.size();x++)
        {
            mp2[word2[x]]++;
        }
       vector<int>v1,v2;
        for(auto x:mp1)
        {
            if(mp2.find(x.first)==mp2.end())
            {
                return false;
            }
            v1.push_back(x.second);
        }
        for(auto x:mp2)
        {
            v2.push_back(x.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

return v1==v2;
    }
};