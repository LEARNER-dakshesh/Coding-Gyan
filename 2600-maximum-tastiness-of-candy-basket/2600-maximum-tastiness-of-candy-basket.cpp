class Solution {
public:
    bool calc(vector<int> price, int mid, int k) {
        int take=price[0];
        int cnt=1;
        int i=1;
        while(i<price.size())
        {
            if((price[i]-take)>=mid)
            {
                take=price[i];
                cnt++;
            }
            if(cnt==k)
            {
                break;
            }
            i++;
        }
        return cnt==k;
    }
    int maximumTastiness(vector<int>& price, int k) {
        int n = price.size();
        sort(price.begin(), price.end());
        int maxdiff = 1e9;
       int ans=INT_MIN;
        int low = 0, high = maxdiff;
        while (low < high) {
            int mid = (low + high) / 2;
            if (calc(price, mid, k) == true) {
                ans = max(ans, mid);
                low = mid + 1;
            } else {
                high = mid ;
            }
        }
        return low-1;
    }
};