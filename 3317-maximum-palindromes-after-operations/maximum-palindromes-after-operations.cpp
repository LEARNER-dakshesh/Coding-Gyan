class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        unordered_map<char,int>mp;
        vector<int>v;
        int co=0;
        for(auto word:words)
        {
            v.push_back(word.size());
        }
        for(auto word:words)
        {
            for(auto ch:word)
            {
            mp[ch]++;
            }
        }
        sort(v.begin(),v.end());
        int can=0;
        for(auto x:mp)
        {
            can+=x.second/2;
        }
        int c=0;
        for(auto it:v)
        {
            int need=it/2;
            if(can>=need){
                c++;
                can-=need;
            }
        }
        return c;
    }
};