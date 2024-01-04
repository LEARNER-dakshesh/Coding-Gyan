class Solution {
public:
    int countPrimes(int n) {
        if(n<2)
        {
            return 0;
        }
    vector<long long>v(n,1);
    long long cnt=0;
    for(long long x=2;x<n;x++)
    {
        if(v[x]==1)
        {
            cnt++;
            for(long long y=x*x;y<n;y+=x)
            {
                v[y]=0;
            }
        }
    }
    // for(int x=2;x<v.size();x++)
    // {
    //     if(v[x]==1)
    //     {
    //         cout<<x<<endl;
    //         cnt++;
    //     }
    // }
    return cnt;
    }
};