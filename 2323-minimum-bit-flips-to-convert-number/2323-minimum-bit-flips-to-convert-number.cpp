class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        vector<int>sinbin;
        vector<int>ginbin;
        for(int x=30;x>=0;x--)
        {
            int bitval=(start>>x)&1;
            sinbin.push_back(bitval);
            int bitval2=(goal>>x)&1;
            ginbin.push_back(bitval2);
        }
        int cnt=0;
        for(int x=30;x>=0;x--)
        {
            // cout<<sinbin[x]<<" ";
            if(sinbin[x]!=ginbin[x])
            {
                cnt++;
            }
        }
        // cout<<endl;
        //  for(int x=30;x>=0;x--)
        // {
        //     cout<<ginbin[x]<<" ";
        // }
        return cnt;
    }
};