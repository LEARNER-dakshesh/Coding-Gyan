class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long cnt = 0;
        int n = nums.size();
        
        for (int i = 0; i < n - 1; ++i) {
            int minVal = lower - nums[i];
            int maxVal = upper - nums[i];
            
            int low = lower_bound(nums.begin() + i + 1, nums.end(), minVal) - nums.begin();
            int high = upper_bound(nums.begin() + i + 1, nums.end(), maxVal) - nums.begin() - 1;
            
            if (low <= high) {
                cnt += (high - low + 1);
            }
        }
        
        return cnt;
    }
};