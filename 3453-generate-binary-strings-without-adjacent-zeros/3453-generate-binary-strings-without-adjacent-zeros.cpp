class Solution {
public:
void calc(int n,string curr, vector<string>&ans) {
    if (curr.length() == n) 
    {
        ans.push_back(curr);
        return;
    }
    calc(n,curr+"1",ans);
    int n1=curr.size();
    if (curr.empty() || curr[n1-1]=='1') 
    {
        calc(n,curr+"0",ans);
    }
}
    vector<string> validStrings(int n) {
         vector<string> ans;
         calc(n,"",ans);
         return ans;
    }
};