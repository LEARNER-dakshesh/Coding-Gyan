class Solution {
public:
bool check(string word)
{
    int n=word.size();
   return (word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u') && 
          (word[n-1]=='a' || word[n-1] =='e' || word[n-1]=='i' || word[n-1]=='o' || word[n-1]=='u');

}
    vector<int> vowelStrings(vector<string>& word, vector<vector<int>>& queries) {
        int n=word.size();
        vector<int>vowelCnt(n+1,0);

        for(int x=1;x<=word.size();x++)
        {
            if(check(word[x-1]))
            {
                vowelCnt[x]=vowelCnt[x-1]+1;
            }
            else
            {
                vowelCnt[x]=vowelCnt[x-1];
            }
        }
    vector<int>ans;
    for(int x=0;x<queries.size();x++)
    {
        int end=queries[x][1];
        int start=queries[x][0];
        // cout<<vowelCnt[end+1]<<" "<<vowelCnt[start]<<endl;
       ans.push_back(vowelCnt[end+1]-vowelCnt[start]);
    }
return ans;
    }
};