class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        vector<int>pre0(n,0);
        if(s[0]=='0')
        {
            pre0[0]=1;
        }
        vector<int>suff1(n,0);
        if(s[s.size()-1]=='1')
        {
            suff1[s.size()-1]=1;
        }

        for(int x=1;x<s.size();x++)
        {
            if(s[x]=='0')
            {
                pre0[x]=(pre0[x-1]+1);
            }
            else
            {
                pre0[x]=pre0[x-1];
            }
        }
        for(int x=s.size()-2;x>=0;x--)
        {
            if(s[x]=='1')
            {
                suff1[x]=suff1[x+1]+1;
            }
            else
            {
                suff1[x]=suff1[x+1];
            }
        }

        for(int x=0;x<pre0.size();x++)
        {
            cout<<pre0[x]<<" ";
        }
        cout<<endl;
        for(int x=0;x<suff1.size();x++)
        {
            cout<<suff1[x]<<" ";
        }

        int ans=0;
        for(int x=0;x<suff1.size()-1;x++)
        {
            ans=max(ans,pre0[x]+suff1[x+1]);
        }
        return ans;
    }
};