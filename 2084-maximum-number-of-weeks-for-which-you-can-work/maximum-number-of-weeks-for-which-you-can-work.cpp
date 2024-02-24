class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
         int MOD = 1000000009 + 7;
        
        long long maxa = *max_element(milestones.begin(), milestones.end());
        long long tot = accumulate(milestones.begin(), milestones.end(), 0LL);
        
        long long remaining = tot - maxa;
        if (remaining >= maxa) {
            return tot;
        } else {
            long long ans = remaining * 2LL + 1LL;
            return min(ans, tot);
        }
    }
};