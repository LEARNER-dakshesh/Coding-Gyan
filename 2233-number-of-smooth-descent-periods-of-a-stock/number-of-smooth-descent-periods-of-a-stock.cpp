class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt=0,sum=0;
        for(int x=1;x<prices.size();x++)
        {
            if(prices[x]+1==prices[x-1])
            {
                cnt++;
            }
            else{
                sum+=((cnt)*(cnt+1))/2;
                cnt=0;
            }
        }
        if(cnt>0)
        {
            sum+=((cnt)*(cnt+1))/2;
        }
        int n=prices.size();
        return sum+n;
    }
};