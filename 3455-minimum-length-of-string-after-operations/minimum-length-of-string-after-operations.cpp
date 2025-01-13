class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mp;
        for(int x=0;x<s.size();x++)
        {
            mp[s[x]]++;
        }
        int cnt=0;
        for(auto x:mp)
        {
            if(x.second%2==0)
            {
                cnt+=2;
            }
            else{
                cnt+=1;
            }
        }
        return cnt;




    }
};