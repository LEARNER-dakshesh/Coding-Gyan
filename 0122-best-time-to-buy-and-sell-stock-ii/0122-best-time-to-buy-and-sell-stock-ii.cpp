class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        for(int x=1;x<prices.size();x++)
        {
            if(prices[x]>prices[x-1])
            {
                pro+=prices[x]-prices[x-1];
            }
        }
        return pro;
    }
};