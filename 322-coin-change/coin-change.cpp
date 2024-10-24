class Solution {
public:
    int dp[100000];
    long long MinCoinsReq(vector<int>&coins,int amount)
    {
        if(dp[amount]!=-1)
        {
            return dp[amount];
        }
        else if(amount==0)
        {
            return 0;
        }

        long long ans=INT_MAX;
        for(int coin: coins)
        {
            if(amount-coin>=0)
            {
                 ans=min(ans,MinCoinsReq(coins,amount-coin)+1LL);
            }
        }

        return dp[amount]=ans;
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        long long ans=MinCoinsReq(coins,amount);
        return ans==INT_MAX? -1: ans;
    }
};