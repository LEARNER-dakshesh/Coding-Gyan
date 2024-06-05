class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
     
     unordered_map<char,int>minimumCommon;
     for(char x='a';x<='z';x++)
     {
      minimumCommon[x]=1000;
     }

     for(auto word:words)
     {
        unordered_map<char,int>frequency;
        for(auto ch:word)
        {
            frequency[ch]++;
        }
       for(char ch='a';ch<='z';ch++)
       {
           minimumCommon[ch]=min(minimumCommon[ch],frequency[ch]);
       }
     }
    vector<string>res;
    for(char ch='a';ch<='z';ch++)
    {
        while(minimumCommon[ch]>0)
        {
        res.push_back(string(1,ch));
        minimumCommon[ch]--;
        }
    }
return res;
    }
};