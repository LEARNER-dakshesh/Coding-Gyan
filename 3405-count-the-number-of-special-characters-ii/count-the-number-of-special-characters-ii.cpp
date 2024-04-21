class Solution {
public:
       int numberOfSpecialChars(string word) {
        unordered_map<int,int>mp;
        for(int x=0;x<word.size();x++)
        {
            if(mp.find(word[x])!=mp.end() && word[x]>=65 && word[x]<=90)
            {
                
            }
            else{
            mp[word[x]]=x;
            }
        }
        int count=0;
        for(auto x:mp){
            if(x.first>=97 && x.first<=122)
            {
                if(mp.find(x.first-32)!=mp.end())
                {
                    int find=mp[x.first-32];
                    if(x.second<=find){
                    count++;
                    }
                }
            }
        }
        return count;
    }
};