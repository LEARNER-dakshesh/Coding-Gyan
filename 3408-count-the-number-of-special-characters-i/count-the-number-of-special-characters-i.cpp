class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int>mp;
        for(int x=0;x<word.size();x++)
        {
            mp[word[x]]++;
        }
        int count=0;
        for(auto x:mp){
            if(x.first>=97 && x.first<=122)
            {
                if(mp.find(x.first-32)!=mp.end())
                {
                    count++;
                }
            }
        }
        return count;
    }
};