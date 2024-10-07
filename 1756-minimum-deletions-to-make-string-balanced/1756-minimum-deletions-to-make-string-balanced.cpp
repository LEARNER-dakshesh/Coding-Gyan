class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>va(n,0);
        vector<int>vb(n,0);
        int cnt=0;
        for(int x=0;x<n;x++)
        {
            vb[x]=cnt;
            if(s[x]=='b')
            {
                cnt++;
            }
        }
        cnt=0;
        for(int x=n-1;x>=0;x--)
        {
           va[x]=cnt;
           if(s[x]=='a')
            {
                cnt++;
            }
            
        }
        int ans=INT_MAX;
        for(int x=0;x<n;x++)
        {
            ans=min(ans,va[x]+vb[x]);
        }
        return ans;



    }
};