class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
    int n = nums.size();
    if (n<=1) return n;
    int maxa = 1;
    int currL = 1;
    
    for (int i =1;i<n;i++) {
        if (nums[i]>nums[i - 1]) {
            currL++;
        } else {
            maxa=max(maxa, currL);
            currL = 1;
        }
    }
    maxa=max(maxa, currL);
    currL = 1;
    for (int i=1;i<n;i++) {
        if (nums[i]<nums[i - 1]) {
            currL++;
        } else {
            maxa = max(maxa, currL);
            currL = 1;
        }
    }
    maxa = max(maxa, currL);
    return maxa;
    }
};