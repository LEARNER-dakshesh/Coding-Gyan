class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       
          unordered_set<int> ban(banned.begin(), banned.end());
        int res = 0, sum = 0;
        for (int i = 1; i <= n; i++) {
            if (!ban.count(i)) {
                sum += i;
                if (sum <= maxSum) res++;
                else break;
            }
        }
        return res;
    }
};