class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int x=0;x<prices.size();x++)
        {
          minprice=min(minprice,prices[x]);
          maxprofit=max(maxprofit,prices[x]-minprice);
        }
        return maxprofit;
    }
};