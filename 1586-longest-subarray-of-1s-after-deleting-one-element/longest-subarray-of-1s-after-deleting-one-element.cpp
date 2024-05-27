class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int zeroCount = 0;
        int maxa = 0;
        bool c = false;

        while (j<nums.size()) {
            if (nums[j] == 0) {
                zeroCount++;
                c = true;
            }
            while (zeroCount > 1) {
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }
            maxa = max(maxa, j - i);
            j++;
        }

        return c ? maxa : (j-i-1); 
    }
};
