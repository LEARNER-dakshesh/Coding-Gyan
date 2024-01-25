class Solution {
public:
bool getResult(string query,string pattern)
{
    if(query==pattern)
    {
        return true;
    }
    int j=0;
    for(int i=0;i<query.size();i++)
    {
     if(j< pattern.size() && pattern[j]==query[i])
      {
        j++;
      }
      else if(query[i]>='A' && query[i]<='Z')
      {
          return false;
      }
    }
    // cout<<j<<" ";
    return j==pattern.size();
}
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;
        for(int x=0;x<queries.size();x++)
        {
            bool res=getResult(queries[x],pattern);
            ans.push_back(res);
        }
        return ans;
    }
};