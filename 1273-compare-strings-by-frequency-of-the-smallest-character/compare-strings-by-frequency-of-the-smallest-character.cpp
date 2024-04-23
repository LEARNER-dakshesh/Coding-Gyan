class Solution {
public:
int findMin(string query,vector<string>words, vector<pair<int,char>>words_map)
{
    unordered_map<int,int>mp;
    for(auto x: query)
    {
          mp[x]++;
    }
    int val;
    char ch='z'; 
    for(auto x:mp)
    {
        if(x.first<=ch)
        {
            ch=x.first;
            val=x.second;
        }
    }
    int count=0;
    for(auto x:words_map)
    {
        if(val<x.first)
        {
            count++;
        }
    }
    return count;
}
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>ans;
        vector<pair<int,char>>words_map;
        for(auto word:words)
        {
            string w=word;
            unordered_map<int,char>word_map;
            for(auto x:w)
            {
                word_map[x]++;
            }
            char store='z';
            int  freq;
            for(auto x:word_map)
            {
               if(x.first<=store)
               {
                   store=x.first;
                   freq=x.second;
               }
            }
            words_map.push_back({freq,store});
        }
        for(auto x:words_map)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        for(int x=0;x<queries.size();x++)
        {
            int res=findMin(queries[x],words,words_map);
            ans.push_back(res);
        }
        return ans;
    }
};